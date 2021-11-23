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

## コード、ノード(クラス)のつながり
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

## 使い方
### 1つ目のターミナル
初めにros2_wsフォルダへ移動しておく。
```
ubuntu@ubuntu:~$ cd ros*
ubuntu@ubuntu:~/ros2_ws$ ros2 launch raspimouse_launch raspimouse_launch.py
[INFO] [launch]: All log files can be found below /home/ubuntu/.ros/log/2021-11-23-07-20-00-273211-ubuntu-4666
[INFO] [launch]: Default logging verbosity is set to INFO
[INFO] [buzzer-1]: process started with pid [4669]
[INFO] [motor_action_server-2]: process started with pid [4671]
[motor_action_server-2] [INFO] [1637652008.747529935] [lightsensors]: lightsensors_freq : 0.500000
```
ここまで表記されるまで待つ。

3つのターミナル(wall_stop_multi_node.py)からゴールが送られてくると、以下のメッセージが出る
```
[motor_action_server-2] [INFO] [1637652041.507044400] [motors]: Received goal request
[motor_action_server-2] [INFO] [1637652041.521701548] [motors]: Executing goal(simple)...
[motor_action_server-2] [INFO] [1637652041.529047362] [motors]: vector.x : "0.000000"
[motor_action_server-2] [INFO] [1637652041.534360316] [motors]: vector.y : "0.500000"
[motor_action_server-2] [INFO] [1637652041.539718635] [motors]: timed motion requested.
[motor_action_server-2] [INFO] [1637652041.544777893] [motors]: left_hz : "1414.710605"
[motor_action_server-2] [INFO] [1637652041.549601525] [motors]: right_hz : "1414.710605"
[motor_action_server-2] [INFO] [1637652041.554219430] [motors]: left_hz : "400"
[motor_action_server-2] [INFO] [1637652041.558885823] [motors]: right_hz : "400"
[motor_action_server-2] [INFO] [1637652041.563460030] [motors]: duration_ms : "3537"
[motor_action_server-2] [INFO] [1637652041.568226163] [motors]: rotation : "7"
[motor_action_server-2] [INFO] [1637652041.572880161] [motors]: mod : "37.000000"
[motor_action_server-2] [INFO] [1637652041.578368584] [motors]: pull TimedMotion : Time(nanoseconds=1637652041573637711, clock_type=ROS_TIME)
[motor_action_server-2] [INFO] [1637652043.122000333] [motors]: pull TimedMotion : Time(nanoseconds=1637652043114138427, clock_type=ROS_TIME)
[motor_action_server-2] [INFO] [1637652044.658068826] [motors]: pull TimedMotion : Time(nanoseconds=1637652044650181347, clock_type=ROS_TIME)
[motor_action_server-2] [INFO] [1637652046.192736128] [motors]: pull TimedMotion : Time(nanoseconds=1637652046186113333, clock_type=ROS_TIME)
[motor_action_server-2] [INFO] [1637652047.730175509] [motors]: pull TimedMotion : Time(nanoseconds=1637652047722113812, clock_type=ROS_TIME)
[motor_action_server-2] [INFO] [1637652049.270022909] [motors]: I heard sum_all : "6298"
[motor_action_server-2] [INFO] [1637652050.276237673] [motors]: I heard sum_all : "6443"
```

３つのターミナルのうち、最後に終了させる(Ctrl+c)
```
^C[WARNING] [launch]: user interrupted with ctrl-c (SIGINT)
```

### 2つ目のターミナル
初めにros2_wsフォルダへ移動しておく。
モーターをon/offさせる。
まず、1つ目のターミナルで以下まで読み込まれて、センサーが点滅し始めるまで待つ。
```
[motor_action_server-2] [INFO] [1637652008.747529935] [lightsensors]: lightsensors_freq : 0.500000
```
モーターONのコマンドを送る。
```
ubuntu@ubuntu:~$ cd ros*
ubuntu@ubuntu:~/ros2_ws$ ros2 service call /motor_on std_srvs/srv/Trigger
requester: making request: std_srvs.srv.Trigger_Request()

response:
std_srvs.srv.Trigger_Response(success=True, message='ON')
```
サービス・ノードなのでレスポンスが返ってきていることがわかる。

モーターをoffする場合は以下。
```
ubuntu@ubuntu:~$ ros2 service call /motor_off std_srvs/srv/Trigger
requester: making request: std_srvs.srv.Trigger_Request()

response:
std_srvs.srv.Trigger_Response(success=True, message='OFF')
```
いずれも、少し時間がかかる。

### 3つ目のターミナル
初めにros2_wsフォルダへ移動しておく。
1つ目、2つ目のターミナルでライトセンサーが点滅し始め、モーターONになったら準備完了。モーターの物理電源をONにしておくこと。
```
ubuntu@ubuntu:~$ cd ros*
ubuntu@ubuntu:~/ros2_ws$ ros2 run raspimouse_run_corridor wall_stop_multi_node
[INFO] [1637652041.721096899] [wall_stop_multi_node]: Goal accepted
[INFO] [1637652051.286781645] [wall_stop_multi_node]: feedback.distanse:0.3534291735288517
[INFO] [1637652051.294986676] [wall_stop_multi_node]: MoveRobot ran at 0.3534291735288517 m.
ubuntu@ubuntu:~/ros2_ws$
```
