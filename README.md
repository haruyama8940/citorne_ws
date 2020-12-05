# citorne_ws
# ロボットシステム学
## robsys2020 課題1 春山　健太
## <共同製作者>
- 個人情報保護のためソースコード内ライセンスを参照
## 課題1 <内容>
- <内容>
  - ledを２つ用意し、点灯消灯を行う。
  - 講義で作成したデバイスドライバを改造し、モータを駆動させる
  - 上記のデバイスドライバを用いてモータ２個を動力とする車両型ロボットを製作、動作させる

## <動作動画>
  - リンク　https://youtu.be/Q09gxp2ZfPM
## <実行環境>
Raspberry Pi及びubuntu(desktop,serverとはない)が必要
次の環境では動作を確認
|||
|:---|---:|
|機種|Raspberry Pi Model 3B|
|OS|ubuntu mate 18.04|

## <使用回路>
ギヤードDCモータ ×2  
モータドライバ(TA7291P)   ×2
単三電池 ×4  
|||
|:---|---:|
|motor1|gpio25, gpio24|
|motor2|gpio23, gpio22|

モータとRaspberry PiのPIN接続は次のようになる
![kairo](https://github.com/haruyama8940/citorne_ws/blob/main/kairo.jpg)

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
$echo 1 > /dev/myled0 #前進
$echo 2 > /dev/myled0 #旋回
$echo 3 > /dev/myled0 #旋回
$echo 4 > /dev/myled0 #後進
```
- デバイスドライバの削除
```bash:delate device driver
$sudo rmmod myled
```
# 参考資料
https://github.com/ryuichiueda/robosys_device_drivers
