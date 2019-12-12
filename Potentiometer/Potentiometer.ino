//Potentiometer
//Justine Brown
//lCD screen reads numerical value representing the brightness of an LED which is controlled by a potentiometer

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
int potpin = 2;
int ledpin = 13;
int potvalue;
LiquidCrystal_I2C lcd(0x3F,16,2);

void setup(){
	lcd.begin (16,2); // for 16 x 2 LCD module
lcd.init();//lcd screen set up
lcd.backlight();
lcd.setBacklight(HIGH);
lcd.setCursor(0,0);
lcd.print("brightness:");//lcd print brightness and then the value of the potentiometer
	lcd.println(potvalue);
Serial.begin(9600);
}

void loop()
{
	lcd.setCursor(0,1);
	potvalue = analogRead(potpin);//analog read for value of potentiometer
Serial.println(potvalue);
	//if (potvalue < 5 )
if (potvalue < 100 and potvalue != 0 )//if the pot value is less than 100 the led will be dul
{
	analogWrite(ledpin, 50);
}

if (potvalue > 99 and potvalue < 150){//if the pot value is in the middle the led will light up a little more
    analogWrite(ledpin, 150);
}
if(potvalue >149){//if the pot value is high the led will be high
    analogWrite(ledpin, 255);
}
if(potvalue = 0){
    analogWrite(ledpin, 0);
}
}
