#include "LiquidCrystal_I2C.h"
LiquidCrystal_I2C lcd(0x27, 16, 2);

#include <Servo.h> 
Servo myservo;   

void setup() 
{ 
   
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Servo : 0 degrees");
  delay(800);
  lcd.clear();
  
  myservo.attach(9); 
  myservo.write(160); 
  delay(800);

             
  myservo.write(0); 
  delay(800); 
              
} 
void loop() 
{
  lcd.setCursor(0, 0);
  delay(800);

}
