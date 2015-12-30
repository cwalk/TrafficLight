/*auto cycle after 5 seconds
 * Basic Traffic Light
 * Clayton Walker
 */

//setup LEDs
int stopRedPin = 12;
int stopYellowPin = 11;
int stopGreenPin = 10;
int pedRedPin = 9;
int pedGreenPin = 8;

void setup() {
  // setup pin modules
  pinMode(stopRedPin, OUTPUT);
  pinMode(stopYellowPin, OUTPUT);
  pinMode(stopGreenPin, OUTPUT);
  pinMode(pedRedPin, OUTPUT);
  pinMode(pedGreenPin, OUTPUT);

  //Traffic Light Green by default
  digitalWrite(stopGreenPin, HIGH);
  //Pedestrian Light Red by default
  digitalWrite(pedRedPin, HIGH);

}

void loop() {
  // wait 5 seconds, then start cycle
  delay(5000);
  stoplight();
}

void stoplight(){
  //go through cycle - turn off Green Light, Turn light yellow for 2 seconds,
  //turn yellow off, turn on red
  digitalWrite(stopGreenPin, LOW);
  digitalWrite(stopYellowPin, HIGH);
  delay(2000);
  digitalWrite(stopYellowPin, LOW);
  digitalWrite(stopRedPin, HIGH);
  pedestrian();
}

void pedestrian(){
  //wait for cars to pass through intersection,
  //turn off red ped light, and turn on green ped light for 5 sec
  delay(1000);
  digitalWrite(pedRedPin, LOW);
  digitalWrite(pedGreenPin, HIGH);
  delay(5000);
  //turn off green ped light and turn back on red ped light
  digitalWrite(pedGreenPin, LOW);
  digitalWrite(pedRedPin, HIGH);

  //turn off red ped light
  digitalWrite(stopRedPin, LOW);
  //turn on green stoplight
  digitalWrite(stopGreenPin, HIGH); 
}

