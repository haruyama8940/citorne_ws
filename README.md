# citorne_ws
# ロボットシステム学
## robsys2020 課題1 春山　健太
## <共同製作者>
- 個人情報保護のためソースコード内ライセンスを参照
## 課題1 <内容>
- <内容>
  - ledを２つ用意し、点灯消灯を行う。
  - 講義で作成したデバイスドライバを改造し、モータを駆動させる
  - モータを２つ用いて車両型ロボットを製作、動作させる
- <アピールポイント>
  - ledを点滅させるだけでは面白みがないため、モータドライバ及びモータを使用する
## <実行環境>
Raspberry Pi及びubuntu(desktop,serverとはない)が必要
次の環境では動作を確認
|||
|:---|---:|
|機種|Raspberry Pi Model 3B|
|OS|ubuntu mate 18.04|

## <使用回路>
![kani](/Screenshot from 2020-11-23 13-03-15.png)
## <動作手順>
- ビルド
ソースコード(.c)が存在するフォルダへ移動
次のコマンドを使用し、ビルド
※一度した場合にはビルドした場合には後述するデバイスドライバの削除を実行
```bash:build
$make 
$sudo insmod myled.ko
$sudo chmod 666 /dev/myled0
```
- 動作
```bash:move
$echo 1 > /dev/myled0 #
$echo 2 > /dev/myled0 #
$echo 3 > /dev/myled0 #
$echo 4 > /dev/myled0 #
```
- デバイスドライバの削除
```bash:delate device driver
$sudo rmmod myled
```
# 参考資料
https://github.com/ryuichiueda/robosys_device_drivers
