#include <CapacitiveSensor.h>

CapacitiveSensor   cs = CapacitiveSensor(0,2); // 10M resistor between pins 0 & 2, pin 2 is sensor pin
 
void setup(void)
{
  Serial.begin(9600);
}

void loop()                    
{
    long start = millis();
    long total =  cs.capacitiveSensor(30);
    Serial.print(total);
    
    //do something with total1 here               
 
    delay(10);  // delay until next reading
}
