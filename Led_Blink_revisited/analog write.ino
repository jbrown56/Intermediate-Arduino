//analog write.ino
int led = 11;
int brightness = 0;
int fadeAmount = 5;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   analogWrite(led, brightness);
   brightness = brightness + fadeAmount;
   if (brightness == 0 or brightness == 225){
   	fadeAmount = -fadeAmount; 
   }    
   if (brightness == 1 ) {
   	Serial.print("x");
   	delay(50);
   	Serial.println();
   }  
   if (brightness == 0){
   	Serial.print("xxxxxxxxxxxxx");
   	delay(50);
   	Serial.println();
           
   }
   delay(30);

   }
 
