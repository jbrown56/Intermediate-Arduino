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
<<<<<<< HEAD
lcd.init();//set up for Lcd
lcd.backlight();
lcd.setBacklight(HIGH);
lcd.setCursor(0,0);
lcd.print("brightness:");//lcd is set up to say brightness
=======
lcd.init();//lcd screen set up
lcd.backlight();
lcd.setBacklight(HIGH);
lcd.setCursor(0,0);
lcd.print("brightness:");//lcd print brightness and then the value of the potentiometer
>>>>>>> 2f4760c3ea98025a32e05491fe73909c4b69f156
	lcd.println(potvalue);
Serial.begin(9600);
}

void loop()
{
	lcd.setCursor(0,1);
<<<<<<< HEAD
	potvalue = analogRead(potpin);//reading the potentiometer pin
Serial.println(potvalue);
	//if (potvalue < 5 )
if (potvalue < 100 and potvalue != 0 )//led is on low brightness when potentiometer is below 100
=======
	potvalue = analogRead(potpin);//analog read for value of potentiometer
Serial.println(potvalue);
	//if (potvalue < 5 )
if (potvalue < 100 and potvalue != 0 )//if the pot value is less than 100 the led will be dul
>>>>>>> 2f4760c3ea98025a32e05491fe73909c4b69f156
{
	analogWrite(ledpin, 50);
}

<<<<<<< HEAD
if (potvalue > 99 and potvalue < 150){//led's brightnes increases a little
    analogWrite(ledpin, 150);
}
if(potvalue >149){//led is full brightness when potentiometer has high value
=======
if (potvalue > 99 and potvalue < 150){//if the pot value is in the middle the led will light up a little more
    analogWrite(ledpin, 150);
}
if(potvalue >149){//if the pot value is high the led will be high
>>>>>>> 2f4760c3ea98025a32e05491fe73909c4b69f156
    analogWrite(ledpin, 255);
}
if(potvalue = 0){//led is off
    analogWrite(ledpin, 0);
}
}
