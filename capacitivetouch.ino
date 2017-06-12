#include <CapacitiveSensor.h>

/*
 * CapitiveSense Library Demo Sketch
 * Aman Adhav 2016
 */



CapacitiveSensor Right23  = CapacitiveSensor(3, 2); // wire from pin 2 to left side of resistor ladder\


void setup()                    
{
   Right23.set_CS_AutocaL_Millis(0xFFFFFFFF);     // turn off autocalibrate on channel 1 - just as an example
   Serial.begin(9600);
}

void loop()                    
{
    
    long total3 =  Right23.capacitiveSensor(30);
    Serial.println(total3);                // print sensor output 3

    delay(1000);                             // arbitrary delay to limit data to serial port 
}
