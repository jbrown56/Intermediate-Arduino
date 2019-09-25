
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
int potpin = 2;
int ledpin = 13;
int potvalue;
LiquidCrystal_I2C lcd(0x3F,16,2);

void setup(){
	lcd.begin (16,2); // for 16 x 2 LCD module
lcd.setBacklight(3,POSITIVE);
lcd.setBacklight(HIGH);
Serial.begin(9600);
}

void loop()
{
	lcd.setCursor(0,1);
	potvalue = analogRead(potpin);
	lcd.println("brightness:"potvalue);
	Serial.println(potvalue);
	//if (potvalue < 5 )

}
