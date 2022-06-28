// defining the pins
 const int trigPin = 4;
 const int echoPin = 3;
 // defining variables
float duration; 
float distance;
void setup() 
{ 
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output 
pinMode(echoPin, INPUT); 
 // Sets the echoPin as an Input 
    pinMode(9,OUTPUT);
Serial.begin(9600); // Starts the serial communication
     } 
void loop() { // Clears the trigPin 
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2); // Sets the trigPin on HIGH state for 10 micro seconds 
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10); 
    digitalWrite(trigPin, LOW);
     // Reads the echoPin, returns the sound wave travel time in microseconds 
    duration = pulseIn(echoPin, HIGH);
     // Calculating the distance
     distance = (duration*0.034/2)/100;
     //// Prints the distance on the Serial Monitor 
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