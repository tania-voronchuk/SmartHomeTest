const int buttonPin = 7; 

const int ledPins[] = {9, 10, 11};
int counter = 0;
int buttonState = 0;

void setup(){
 pinMode(buttonPin, INPUT_PULLUP);
 for(int i = 0; i < 3; i ++) {
  pinMode(ledPins[i], OUTPUT);
 }
}

void loop(){
 buttonState = digitalRead(buttonPin);
 if(buttonState == LOW) {
 counter = counter + 1;
   if(counter > 2){
   counter = 0;
   }
   for(int i = 0; i < 3; i ++){
   digitalWrite(ledPins[i], LOW);
   }
   digitalWrite(ledPins[counter], HIGH);
   delay(250);
 }
}