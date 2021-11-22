void setup() {
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
 
}

void loop() {
 int t = 100;
 
  for (int i = 1; i<7; i++){
    digitalWrite(i,HIGH);
    delay(t);
    digitalWrite(i,LOW);
    
  }
for (int l = 5; l>1; l--) {
   digitalWrite(l,HIGH);
    delay(t);
    digitalWrite(l,LOW);
}

}
