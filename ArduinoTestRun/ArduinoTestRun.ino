void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,1);
delay(500);
digitalWrite(13,0);
delay(500);
}
