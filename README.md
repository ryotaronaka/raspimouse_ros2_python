# Raspimouse-V2 上で ROS2(Python) を動かす

## 開発環境
- 母艦PC : Ubuntu 20.04
- Code Editor : Visual Studio Code
- Robot : Raspimouse V2
  - Raspberry-Pi3(Ubuntu 20.04)
  - デバイスドライバー rtmouse.ko インストール済み
  - ROS2インストール済み
  - このあたりの手順は[こちら](https://github.com/ryotaronaka/Raspimouse-ROS2_foxy)を参照
 
## プログラミング目標
- action への指示は、50cm全方へ進む、という具体的な距離で指示ができること
- action を利用して、Lightsensorによる観測値を元にモーター動作をストップできること
- 今回は前進とストップが繰り返され、当初設定された駆動距離に対して分割された駆動回数分に対して、前進もしくはストップして終了する。

## 最終的に利用しているコード
```
/ros2-ws
├── README.md
├── /build                                 * ここは基本的にROS2が使う部分
├── /install                               * ここは基本的にROS2が使う部分
├── /log                                   * ここは基本的にROS2が使う部分
└── /src
    ├── /raspimouse
    |   ├── /raspimouse
    |   |   ├── __init__.py
    |   |   ├── lightsensors.py          * motor_action_server.pyから呼び出し
    |   |   └── motor_action_server.py  ** raspimouse_launch.pyから呼び出される
    |   ├── package.xml                  * rclpy/msg/srvs などの情報を記載。（なくても動くような気がする)
    |   └── setup.py                    ** entry_points の部分に利用したいraspimouse内のソースを記載する必要あり
    ├── /raspimouse_msgs
    |   ├── /action
    |   |   └── MoveRobot.action        ** Action の基本形である Goal / Result / Feedback のデータの型を決める
    |   ├── /msg
    |   |   ├── LightSensors.msg        ** motor_action_server.pyから呼び出し。lightsensors.py が発信(Publish)するデータの型を決める
    |   |   └── MotorFreqs.msg           * motor_action_server.pyから呼び出しているが未利用
    |   ├── /srv                         * action を使う際に service 関連のメッセージを使わなくなった
    |   ├── CMakeLists.txt              ** rosidl_generate_interfaces(${PROJECT_NAME} の部分に利用したいaction/service/msgを記載する必要あり。
    |   └── packge.xml
    ├── /raspimouse_launch
    |   ├── /launch
    |   |   └── raspimouse_launch.py    ** 複数のノードを呼び出す部分(motor_action_server.py(MotorActionServer/LightSensors_Node)ノードとBuzzerノード)
    |   ├── CMakeLists.txt               * 最初に生成されたまま
    |   └── packge.xml                  ** name/version などを微修正
    └── /raspimouse_run_corridor
        └── /raspimouse_run_corridor
            ├── __init__.py
            ├── wall_stop_multi_node.py ** Action Client 動作の指示を出す部分。起点。
            ├── package.xml             ** raspimouse, rclpy を追記
            └── setup.py                ** entry_points の部分に利用したいraspimouse_run_corridor内のソースを記載する必要あり
```

##コード、ノード(クラス)のつながり
```
# 表記について　/**** は nodeを示す

raspimouse_launch.py ---> motor_action_server.py
                          └── MultiThreadedExecutor                                    * Action は外側のトピック/サービスを受け付けないので、複数ノードを実行できるように
                              ├── MotorActionServer(ActionServer())
                              |   ├── Service(msg type:Triggr):/motor_on, /motor_off   * モーターのon/offを受け持つサービスノード。サービスは同期型。処理が終わるまで待つ。
                              |   ├── Subscriver(msg type:LightSensors):/lightsensors  * トピックを通じてメッセージ(光センサーの値)を購読するノード。非同期。
                              |   └── ActionServer(msg type:MoveRobot):/moter_action_server
                              |       ├── execute_callback()
                              |       ├── goal_callback()
                              |       ├── handle_accepted_callback()
                              |       ├── cancel_callback()
                              |       └── callback_group()
                              └── lightsensors.py ---> LightSensors_Node(msg type:LightSensors):/lightsensors

wall_stop_multi_node.py --- WallStop
                              └── ActionClient(msg type:MoveRobot):/moter_action_server
                                  ├── send_goal()                                       * x, y, z の進行ベクトルを渡す。実装は直進の y しか出来ていない。
                                  ├── goal_response_callback()                          * MoveRobot.action のGolaを送信できる(self._action_client.send_goal_async())
                                  ├── feedback_callback()                               * MoveRobot.action のFeedbackを受信できる
                                  └── get_result_callback()                             * MoveRobot.action のResultを受信できる

```
