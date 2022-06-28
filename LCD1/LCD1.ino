#include<LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2); //RS,EN,D4,D5,D6,D7

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
//lcd.setCursor(0,0);
lcd.print("Hii");
delay(3000);
lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.print("Hii Biro");
delay(2000);
lcd.clear();
delay(100);
lcd.print("Hello THere");
}
