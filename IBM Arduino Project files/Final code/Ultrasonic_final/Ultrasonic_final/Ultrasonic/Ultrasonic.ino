
 const int trigPin = 4;
 
 
float duration;
float distance;



pinMode(echoPin, INPUT); 
 
    pinMode(9,OUTPUT);
Serial.begin(9600);
     } 
void loop()
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2); 
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10); 
    digitalWrite(trigPin, LOW);
     
    
     
     
     //
    Serial.print("Distance from Sensor1 \n"); 
    Serial.println(distance);
    Serial.print("\n");
    delay(150);
    if( distance <= 1 )
    {
        digitalWrite(9,1);
    }
    else
        {
    digitalWrite(9,0);
}
}