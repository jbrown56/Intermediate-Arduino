int motorpin = 9;
int potpin = 2;
int potvalue;
int motorvalue;

void setup()
{
Serial.begin(9600);
pinMode(motorpin, OUTPUT);  
}

void loop()
{
potvalue = analogRead(potpin);//analog read reads a pin for a number instead of high or low
Serial.println(motorvalue);
motorvalue = potvalue/4;//potetiometer has value from 0 to 1000ish so they need to be divided by 4 to get within the motor's range(0-255)
analogWrite(motorpin, motorvalue);//makes the motor move at the speed of the motor value
}

 