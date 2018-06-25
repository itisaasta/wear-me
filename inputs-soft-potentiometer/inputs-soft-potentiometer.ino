int sensorPin = 3;    // select the input pin for the potentiometer (analog 1 is digital 2)
int sensorValue = 0;  // variable to store the value coming from the sensor
int colorValue = 0;

void setup() {
  // Set internal pullup resistor for sensor pin (analog 1 is digital 2)
  pinMode(3, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // do something
  Serial.print(sensorValue);               
}
