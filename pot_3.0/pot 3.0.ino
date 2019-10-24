#include <Wire.h>
#include <LiquidCrystal_I2C.h> 
LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display.  
// If 0x27 doesn't work, try 0x3F.int potpin = 2;
int ledpin = 11;
int potvalue;
int potpin = 2;
int ledvalue;

void setup(){
	lcd.begin (16,2); // for 16 x 2 LCD module
lcd.init();
lcd.backlight();
lcd.setBacklight(HIGH);
Serial.begin(9600);
}

void loop()
{
lcd.setCursor(0,0);
lcd.print("brightness:");
lcd.setCursor(0,1);
lcd.println(ledvalue);
potvalue = analogRead(potpin);
Serial.println(potvalue);
ledvalue = potvalue/4;
analogWrite(ledpin, ledvalue);
}
