int photopin = 2;
int ledpin = 5;
int photostate;

void setup()
{
	pinMode(photopin, INPUT_PULLUP);
	pinMode(ledpin, OUTPUT);
	Serial.begin(9600);
}
void loop()
{
	int photostate = digitalRead(photopin);
	if (photostate == LOW){
		digitalWrite(ledpin, HIGH);
		delay(50);
	}

	else {
			digitalWrite(ledpin, LOW);
			delay(50);
		}
		Serial.println(photostate);
	}
