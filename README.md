# Intermediate Aruino
 My Intermediate Arduino Assignments 
 ## LED Blink Revisited
Included Files:

[LED Blink Code](https://github.com/jbrown56/Intermediate-Arduino/blob/master/Led_Blink_revisited/LED%20Blink.ino)

### Description:
In this assignment I had to wire up and LED and use an [analog output](https://www.arduino.cc/reference/en/language/functions/analog-io/analogwrite/) instead of digital write to get the LED to fade. 

### Wiring Diagram:
![alt text](https://github.com/jbrown56/Intermediate-Arduino/blob/master/Led_Blink_revisited/LED_Blink_Revisited_fritzing.PNG)

[source for fritzing](http://fritzing.org/projects/led-blinking-using-arduino)

### Lessons Learned:
In this lesson I struggled with how to make the variable start counting down when you reached the maximum (255). I got help from another student who showed me that you can use an if statement so that when you reach the maximum the variable changes so you start counting down. 


## Hello LCD
Included Files:

[Hello LCD Code](https://github.com/jbrown56/Intermediate-Arduino/blob/master/hello_LCD/hello_lcd.ino)

### Description:
[Wire up an LCD](https://learn.adafruit.com/character-lcds/wiring-a-character-lcd) screen without a backpack and code so that the screen reads hello world on one line and the number of seconds since the program started on the second line. 

### Wiring Diagram:
![alt text](https://github.com/jbrown56/Intermediate-Arduino/blob/master/hello_LCD/hello_lcd_fritzing.jpeg)

### Lessons Learned:
When you have a lot of wires it is important to cut them neatly and color code them.

## LCD Backpack
Included Files: 
[LCD Backpack Code](https://github.com/jbrown56/Intermediate-Arduino/blob/master/LCD_backpack/hello_world_%2B_button.ino)

### Description:
In this assignment I learned how to use an [LCD backpack](https://learn.adafruit.com/i2c-spi-lcd-backpack/arduino-i2c-use) which drastically decreases the number of wires necessary for an LCD screen. I then wired my board to include a button that was counted every time it was pressed, and a switch which determined which direction (up or down) it was counting. The LCD screen then read that variable (ie. number of times the button was pressed). 

### Wiring Diagram:
![alt text](https://github.com/jbrown56/Intermediate-Arduino/blob/master/LCD_backpack/LCD_backpack_fritzing.png)

### Lessons Learned:
Make sure that the library for LCD is downloaded and in the correct folder because you may get errors if not. Also remember that variables are really helpful and so is using basic if statements. 

## Photointerruptors
Included Files: 
[Photointerruptors Code (with attach interrupt)](https://github.com/jbrown56/Intermediate-Arduino/blob/master/photo_interruptor/photo.ino)

### Description: 
In this assignment I used an [attach interrupt](https://www.arduino.cc/reference/en/language/functions/external-interrupts/attachinterrupt/) function with a photointerrupter. When something was in between the photointerrupter, it would turn an LED on, when there was nothing the LED would stay off. The interrupt function was used because a loop would be too slow and I needed to be able to detect even very quick interrupts.

### Wiring Diagram:
![alt text](https://github.com/jbrown56/Intermediate-Arduino/blob/master/photo_interruptor/Photo_fritzing.png)

### Lessons Learned: 
Just because the light on the photointerrupter is going on doesn’t mean its working and you can very easily short out photointerrupters if their wires touch so make sure to put tape inbetween them and used a serial monitor to check if their still working. 

## Potentiometers
Included Files: 

[Potentiometer Code](https://github.com/jbrown56/Intermediate-Arduino/blob/master/Potentiometer/Potentiometer.ino)

### Description: 
For this assignment the focus was learning how to use a [potentiometer](https://www.arduino.cc/en/tutorial/potentiometer). I had to wire it with an LCD screen and LED so that when the dial was turned the screen read a numerical value representing how bright it was and the LED brightened accordingly.

### Wiring Diagram:
![alt text](https://github.com/jbrown56/Intermediate-Arduino/blob/master/Potentiometer/Potentiometer_fritzing.png)

### Lessons Learned: 
Potentiometer values range from 0 to 1023, whereas led values go from 0 to 255 so you have to convert the value from the potentiometer to a value in the range of the led. To do this conversion [MAP](https://www.arduino.cc/reference/en/language/functions/math/map/) could be helpful. 

## Motor Control
Included Files: 

[Motor Control Code](https://github.com/jbrown56/Intermediate-Arduino/blob/master/motot_control/motot_control.ino)

### Description:
In this assignment I powered a motor thats speed was controlled with a potentiometer. A [transistor](https://www.arduino.cc/en/Tutorial/TransistorMotorControl) was used to control how much power went to the motor. 

###
![alt text](https://github.com/jbrown56/Intermediate-Arduino/blob/master/motot_control/Motor_fritzing.png)

[Source for fritzing](http://wiki.chssigma.com/index.php?title=File:Motor_Control_Fritzing.png)

### Lessons Learned:
I learned that if you have the transistor in the wrong direction it can cause big problems and short out your motor or other parts of your board, the correct way to put it is so that if the flat side is facing away from you the right goes to ground and the left goes to five volts. 

