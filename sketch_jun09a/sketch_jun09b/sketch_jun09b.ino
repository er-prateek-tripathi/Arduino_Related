void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//glow led for 2sec and off for 2 sec infinitely
digitalWrite(13,HIGH);//giving command to digital pin
//digitalWrite(Pin_no.,1/0|HIGH/LOW) 1/HIGH=5volt,0/LOW = nothing
delay(2000);//delay function to hold the compiler for some time,1000 = 1Second
digitalWrite(13,LOW);
delay(2000);
//nothing after this delay so it will get back to high
}
