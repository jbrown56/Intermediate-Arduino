//LCD backpack
//Justine Brown
// LcD creen reads the number of time btton was pressed, switch determines if it is counting up or down

#include <Wire.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(0x3F,2,1,0,4,5,6,7);
// sometimes 0x27 works when 0x3F doesn't
// that's the I2C address of the backpack 
int buttonpin = 4;
int buttonstate = 0;
int switchpin = 3;
int switchstate = 0;
int n = 0;
int a = 0;
int b = 0;
int paststate = 0;
void setup(){
	lcd.begin (16,2); // for 16 x 2 LCD module
lcd.setBacklightPin(3,POSITIVE);
lcd.setBacklight(HIGH);
lcd.print("hello, world!");	
pinMode(buttonpin, INPUT);
pinMode(switchpin, INPUT);
}
void loop(){
	lcd.setCursor(0,1);
	buttonstate = digitalRead(buttonpin);
	switchstate = digitalRead(switchpin);
	if (switchstate == HIGH ){//if switch is high then counting up
		delay(10);
		a = 1; 
		
	}
	else{//if switch is low then counting down
		a = -1;
	}
	if ( buttonstate == HIGH and paststate == 0){
 n = n + a;//variable counting times button is pressed
 lcd.print(n);
 lcd.print("         ");
	}
	paststate = buttonstate;
	/*if (buttonstate != a){
lcd.print(n);
delay(100);
buttonstate = a;
	}
	if (buttonstate != ){
		n = n + 1;
	}*/
}
