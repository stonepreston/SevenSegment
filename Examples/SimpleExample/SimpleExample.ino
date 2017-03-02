#include <SevenSegment.h>

// Create SevenSegment object using default pin configuration
SevenSegment seg = SevenSegment();

//The setup function is called once at startup of the sketch
void setup()
{
	// initialize output pins 1-12
	for (int i=1; i<=12; i++) {
		pinMode(i,OUTPUT);
	}

}

// The loop function is called in an endless loop
void loop()
{
	int dt = 1;
	seg.display(1, seg.C, true);
	delay(dt);
	seg.display(2, seg.O, false);
	delay(dt);
	seg.display(3, seg.O, false);
	delay(dt);
	// Pass in true as the last argument of the display function to show the decimal point
	seg.display(4, seg.L, true);
	delay(dt);

}
