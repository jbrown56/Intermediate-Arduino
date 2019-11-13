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
potvalue = analogRead(potpin);
Serial.println(motorvalue);
motorvalue = potvalue/4;
analogWrite(motorpin, motorvalue);
}

 