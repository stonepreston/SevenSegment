#include "Arduino.h"
#include <SevenSegment.h>

// Create SevenSegment object using default pin configuration
SevenSegment seg = SevenSegment();

//The setup function is called once at startup of the sketch
void setup()
{

}

// The loop function is called in an endless loop
void loop()
{
	int dt = 1;
	seg.display(1, 'c', false);
	delay(dt);
	seg.display(2, 'o', false);
	delay(dt);
	seg.display(3, 'o', false);
	delay(dt);
	seg.display(4, 'l', false);
	delay(dt);

}
