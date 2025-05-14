    int ledred=10; //define digital pin10 red
    int ledyellow=7; //define digital pin7 yellow
    int ledgreen=4; //define digital pin4 green
    void setup()
    {
    pinMode(ledred,OUTPUT);//set red pin output
    pinMode(ledyellow,OUTPUT);// set yellow pin output
    pinMode(ledgreen,OUTPUT);// set green pin output
    }
    void loop()
    {
    digitalWrite(ledred,HIGH);//light up red lamp
    //! Delay関数の引数を0.1倍に変更
    delay(100);//delay 1000 ms = 1 s
    digitalWrite(ledred,LOW);//go out red lamp
    digitalWrite(ledyellow,HIGH);//light up yellow lamp
    //! Delay関数の引数を0.1倍に変更
    delay(20);//delay 200 ms//
    digitalWrite(ledyellow,LOW);//go out
    digitalWrite(ledgreen,HIGH);//light up green lamp
    //! Delay関数の引数を0.1倍に変更
    delay(100);//delay 1000 ms
    digitalWrite(ledgreen,LOW);//go out
    }