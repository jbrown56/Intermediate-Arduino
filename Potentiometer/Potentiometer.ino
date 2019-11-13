#include <Wire.h>
#include <LiquidCrystal_I2C.h>
int potpin = 2;
int ledpin = 13;
int potvalue;
LiquidCrystal_I2C lcd(0x3F,16,2);

void setup(){
	lcd.begin (16,2); // for 16 x 2 LCD module
lcd.init();
lcd.backlight();
lcd.setBacklight(HIGH);
lcd.setCursor(0,0);
lcd.print("brightness:");
	lcd.println(potvalue);
Serial.begin(9600);
}

void loop()
{
	lcd.setCursor(0,1);
	potvalue = analogRead(potpin);
Serial.println(potvalue);
	//if (potvalue < 5 )
if (potvalue < 100 and potvalue != 0 )
{
	analogWrite(ledpin, 50);
}

if (potvalue > 99 and potvalue < 150){
    analogWrite(ledpin, 150);
}
if(potvalue >149){
    analogWrite(ledpin, 255);
}
if(potvalue = 0){
    analogWrite(ledpin, 0);
}
}
