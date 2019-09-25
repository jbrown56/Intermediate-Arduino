int photopin = 2;
int ledpin = 5;
int photostate;
int interupts = 0;
int oldinterupts = 0;

void setup()
{
	pinMode(photopin, INPUT_PULLUP);
	pinMode(ledpin, OUTPUT);
	Serial.begin(9600);
	attachInterrupt(digitalPinToInterrupt(2), ledhighfunction, RISING);
	attachInterrupt(digitalPinToInterrupt(3), ledlowfunction, FALLING);
}

int ledhighfunction()
{
	digitalWrite(ledpin, HIGH);
	interupts = interupts + 1;
}

int ledlowfunction()
{
	digitalWrite(ledpin, LOW);
}

void loop()
{
	if (interupts != oldinterupts)
	{
		Serial.println(interupts);
	}
	oldinterupts = interupts;
}
