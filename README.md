# citorne_ws
# ロボットシステム学
## robsys2020 課題1 春山　健太
## <共同製作者>
- 高見俊介　高野翔伍　斎藤尚也
## 課題1 <内容>
- <内容>
  - 講義で作成したデバイスドライバを改造し、モータを駆動させる
  - 上記のデバイスドライバを用いてモータ２個を動力とする車両型ロボットを製作、動作させる
- <オリジナリティ>
  - 使用するPINを１つ(25のみ)から4つ(25,24,23,22)へと変更追加している
    モータドライバを使用した回路を製作し、2つ一組(25&24,23&22)としたPINよりHIGH,LOWを組み合わせた信号を出力 
    信号の組み合わせを変更することで正転、逆転などのモータの制御を可能にしている
    HIGH,HIGH信号出力によるモータ破損への注意
## <動作動画>
  - リンク　https://youtu.be/Q09gxp2ZfPM
## <実行環境>
Raspberry Pi及びubuntu(desktop,server問わない)が必要
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

配線図
![bure](https://github.com/haruyama8940/citorne_ws/blob/main/burekairo.png)

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
$echo 2 > /dev/myled0 #左旋回
$echo 3 > /dev/myled0 #右旋回
$echo 4 > /dev/myled0 #後進
```
- デバイスドライバの削除
```bash:delate device driver
$sudo rmmod myled
```
# 参考資料
https://github.com/ryuichiueda/robosys_device_drivers
