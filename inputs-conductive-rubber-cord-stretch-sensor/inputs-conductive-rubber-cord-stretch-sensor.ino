#define RESISTOR 10000 //This is the value of the resistor  
#define RUBBERCORDPIN 1  //This is the analog pin the cord is connected to
void setup(void) { 
  Serial.begin(9600); 
} 
void loop(void) { 
   int value; 
   int raw = 0;          // Raw input value 
   int vin = 5;          // Store input voltage, this should be 5 
   float vout = 0;        // Store output voltage 
   float refresistor1 = 10;  // Variable to store the R1 value 
   float refresistor2 = 0;  //  Value is determined by the voltage 
                           //that falls across after it has been measured.  
   float buffer = 0;      // Buffer variable for calculation 
   value = analogRead(RUBBERCORDPIN);     //Read the value
   vout = (5.0 / 1023.0) * value;         // Calculate the voltage 
   buffer = (vin / vout) - 1; 
   refresistor2 = refresistor1 / buffer; 
   Serial.print("Voltage: "); 
   Serial.println(vout);                  // Output the voltage 
   Serial.print("Resistance: ");  
   Serial.println(refresistor2);          // Output the resistance 
   delay(1000); 
} 
   
