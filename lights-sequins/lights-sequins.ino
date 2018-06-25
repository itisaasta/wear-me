int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by
int counter = 0;       // counter to keep track of cycles

// the setup routine runs once when you press reset:
void setup()  { 
  pinMode(0, OUTPUT); // the D0 pin that the sequin is connected to
} 

// the loop routine runs over and over again forever:
void loop()  { 
  // set the brightness of the analog-connected LEDs:
  analogWrite(0, brightness);
  
  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade: 
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount; 
    counter++;
  }     
  // wait for 15 milliseconds to see the dimming effect    
  delay(15); 

}

