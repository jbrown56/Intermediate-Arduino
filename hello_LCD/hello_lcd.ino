// hello LCD

#include <LiquidCrystal.h>//lcd library need whenever using lcd

LiquidCrystal lcd(7, 8, 9, 10, 11, 12); // Those are the pins for RS, EN, DB4, DB5, DB6, DB7
void setup(){
lcd.begin(16, 2);//setting up lcd
lcd.print("hello, world!");	
}

void loop(){
	lcd.setCursor(0,1);//setting up lcd
	lcd.print(millis()/1000);//prints number of seconds since program started
}