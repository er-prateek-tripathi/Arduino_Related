#include<SoftwareSerial.h>
void setup() {

pinMode(13,OUTPUT);
}

void loop() {

digitalWrite(13,HIGH);

delay(1400);
digitalWrite(13,LOW);
delay(1400);

}
