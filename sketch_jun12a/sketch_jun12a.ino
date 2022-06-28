#include<SoftwareSerial.h>
void setup() {

pinMode(10,OUTPUT);
pinMode(13,OUTPUT);
}

void loop() {

digitalWrite(10,HIGH);
digitalWrite(13,LOW);

delay(1600);
digitalWrite(13,HIGH);
digitalWrite(10,LOW);
delay(1600);

}
