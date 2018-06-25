const int SWITCH_PIN = 12;
 
int led_state = HIGH;
int reading;
int previous = LOW;
 
long time = 0;        // the last time the output pin was toggled
long debounce = 50;   // the debounce time, increase if the output flickers
 
void setup() {
  pinMode(SWITCH_PIN, INPUT);
  digitalWrite(SWITCH_PIN, HIGH);   // turn on the built in pull-up resistor
  Serial.begin(9600);
}
 
void loop() {
  int switchstate;
 
  reading = digitalRead(SWITCH_PIN);
 
  // If the switch changed, due to bounce
  if (reading != previous) {
    // reset the debouncing timer
    time = millis();
  } 
 
  if ((millis() - time) > debounce) {
     // switch has been in same state for "debounce" duration
     switchstate = reading;
 
    if (switchstate == HIGH)
      // do something
      Serial.print(switchstate);
    else
      // do something
      Serial.print(switchstate);
  }
 
  previous = reading;
}
