int photopin = 2;
int ledpin = 5;
int photostate;

void setup()
{
	pinMode(photopin, INPUT_PULLUP);//set up for photp
	pinMode(ledpin, OUTPUT);
	Serial.begin(9600);
}
void loop()
{
	int photostate = digitalRead(photopin);
	if (photostate == LOW){//if nothing is interrupting the photo then the led is on
		digitalWrite(ledpin, HIGH);
		delay(50);
	}

	else {//if something is interrupting the photo then the led is off
			digitalWrite(ledpin, LOW);
			delay(50);
		}
		Serial.println(photostate);
	}
