const int SWITCH_PIN = 12;

int last_pin_state;
 
void setup() {
  pinMode(SWITCH_PIN, INPUT);
  digitalWrite(SWITCH_PIN, HIGH);
  Serial.begin(9600);
}
 
void loop() {
  int pin_state = digitalRead(SWITCH_PIN);
  if (pin_state != last_pin_state) {
    // do something
    Serial.print(pin_state);
    last_pin_state = pin_state;
  }
}
