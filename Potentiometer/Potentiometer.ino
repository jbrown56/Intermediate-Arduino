#include <Wire.h>
#include <LiquidCrystal_I2C.h>
int potpin = 2;
int ledpin = 13;
int potvalue;
LiquidCrystal_I2C lcd(0x3F,16,2);

void setup(){
	lcd.begin (16,2); // for 16 x 2 LCD module
lcd.init();//set up for Lcd
lcd.backlight();
lcd.setBacklight(HIGH);
lcd.setCursor(0,0);
lcd.print("brightness:");//lcd is set up to say brightness
	lcd.println(potvalue);
Serial.begin(9600);
}

void loop()
{
	lcd.setCursor(0,1);
	potvalue = analogRead(potpin);//reading the potentiometer pin
Serial.println(potvalue);
	//if (potvalue < 5 )
if (potvalue < 100 and potvalue != 0 )//led is on low brightness when potentiometer is below 100
{
	analogWrite(ledpin, 50);
}

if (potvalue > 99 and potvalue < 150){//led's brightnes increases a little
    analogWrite(ledpin, 150);
}
if(potvalue >149){//led is full brightness when potentiometer has high value
    analogWrite(ledpin, 255);
}
if(potvalue = 0){//led is off
    analogWrite(ledpin, 0);
}
}
