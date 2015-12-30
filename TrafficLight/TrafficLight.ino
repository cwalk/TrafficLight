/*
 * Clayton Walker
 * TrafficLight.ino
*/

int ledPin = 5;
int buttonPin = 4;

bool ledState = LOW;
bool lastState = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  //check for button push
  bool buttonState = digitalRead(buttonPin);

  //if button was pushed, change state of LED
  if(buttonState == HIGH && lastState == LOW){
    
    ledState = !ledState;
    lastState = HIGH;
  }

  //set lastState to the current buttonState
  lastState = buttonState;
  
  digitalWrite(ledPin, ledState);

  delay(50);
}
