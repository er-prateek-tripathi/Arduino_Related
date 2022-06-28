#define trigPin 4
#define echoPin 3
int const Buzzer = 10; // Connect buzzer pin to 8
int const ledPin= 9;  //Connect LEd pin to 6
int duration, distance; //to measure the distance and time taken 
int Count = 0;

void setup() {
        Serial.begin (9600); 
        //Define the output and input objects(devices)
        pinMode(trigPin, OUTPUT); 
        pinMode(echoPin, INPUT);
        pinMode(Buzzer, OUTPUT);
        pinMode(ledPin, OUTPUT);
}

void loop()
{

    digitalWrite(trigPin, HIGH);
    delay(1000);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = (duration/2) / 29.1;
    //when distance is greater than or equal to 200 OR less than or equal to 0,the buzzer and LED are off

  if (distance < 100) 
        {   Serial.println("  object detected \n");
            Serial.print("distance= ");              
            Serial.print(distance);        //prints the distance if it is between the range 15 to 150
            digitalWrite(Buzzer,1);              // play tone of 400Hz for 500 ms
            digitalWrite(ledPin,HIGH);
            Count = Count + 1;
            Serial.print("  \n Rounds = ");
            Serial.print(Count/2);
        }
  else {
                Serial.println("   no object detected   ");
        digitalWrite(ledPin,LOW);
        digitalWrite(Buzzer,0);
  }
}
