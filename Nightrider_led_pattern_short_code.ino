void setup (){
    pinMode(1,OUTPUT);
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(13,OUTPUT);
}
void loop(){
digitalWrite(13,HIGH);
delay(100);
digitalWrite(13,LOW);
delay(100);
}