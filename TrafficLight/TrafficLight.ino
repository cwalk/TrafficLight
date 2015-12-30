/*
 * Clayton Walker
 * TrafficLight.ino
*/

int ledPin = 5;
int buttonPin = 4;

bool ledState;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  ledState = digitalRead(buttonPin);

  digitalWrite(ledPin, ledState);
}
