
#include<LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2); //RS,EN,D4,D5,D6,D7
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
//lcd.setCursor(0,0);
lcd.print("The table = ");
delay(1000);
lcd.clear();

}

void loop() 
{
  int table,num;
  lcd.write(num);
  // put your main code here, to run repeatedly:
for(int i = 1 ; i <=10 ; i++)
    {
        table = num * i;
       
      lcd.print(table);
      delay(1500);
      lcd.clear();
    }
}
