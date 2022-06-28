int sensorPin = A4; 
int sensorValue;  
int buzz = 12;
int led = 3;

void setup() {
 Serial.begin(9600);
}

void loop() {

 sensorValue = analogRead(sensorPin); 
 Serial.println("Analog Value : ");
 Serial.println(sensorValue);
    delay(1500);
 if (sensorValue > 400)
 {
  Serial.println("Soil Moisture is high.");
  digitalWrite(buzz,1);
  digitalWrite(led,1);
 
 }
 else if (sensorValue < 200 )
 {
    Serial.println("Soil Moisture is low.");
  digitalWrite(buzz,1);
  digitalWrite(led,1);
  delay(300);
 
 }
 else
 {
  Serial.println("Soil's Moisture is in control.");
  digitalWrite(buzz,0);
  digitalWrite(led,0);
 }
 
 
}
