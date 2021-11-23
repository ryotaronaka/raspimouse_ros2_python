# Raspimouse-V2 上で ROS2(Python) を動かす

# 開発環境
- 母艦PC : Ubuntu 20.04
- Code Editor : Visual Studio Code
- Robot : Raspimouse V2
  - Raspberry-Pi3(Ubuntu 20.04)
  - デバイスドライバー rtmouse.ko インストール済み
  - ROS2インストール済み
  - このあたりの手順は[こちら](https://github.com/ryotaronaka/Raspimouse-ROS2_foxy)を参照
 
# プログラミング目標
- action への指示は、50cm全方へ進む、という具体的な距離で指示ができること
- action を利用して、Lightsensorによる観測値を元にモーター動作をストップできること
- 今回は前進とストップが繰り返され、当初設定された駆動距離に対して分割された駆動回数分に対して、前進もしくはストップして終了する。

# 最終的に利用しているコード
ros2-ws
├── README.md
├── build (ここは基本的にROS2が使う部分)
├── install (ここは基本的にROS2が使う部分)
├── log (ここは基本的にROS2が使う部分)
└── src
    ├── raspimouse
    ├── raspimouse_msgs
    ├── raspimouse_launch
    └── raspimouse_run_corridor
