



    {
    Serial.begin(9600);
    

 {
    sensorValue = analogRead(sensorPin); 
    Serial.println("Analog Value : ");
    Serial.println(sensorValue);
    delay(1000); 
    