//LED Blink.ino
//Justine Brown
//description: wiring an led with analog output so that the led will fade

int led = 13;
int brightness = 0;//variable controlling how bright th led is
int fadeAmount = 5;//interval te brightness is increasing by
void setup() {
 
  pinMode(led, OUTPUT);
}

void loop() {
  
   analogWrite(led, brightness);//led with be whatever the brightness variable is
   brightness = brightness + fadeAmount;//brightness increases by 5 every time
   if (brightness == 0 or brightness == 225){
   	fadeAmount = -fadeAmount; //this keeps the brightness variable in between 0 and 255, so if it reaches 255 it starts subtracting 5 instead of adding
   }      
   delay(50);       
}
 
