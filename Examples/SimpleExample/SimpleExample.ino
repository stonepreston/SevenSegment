#include <SevenSegment.h>

// Create SevenSegment object using default pin configuration
SevenSegment seg = SevenSegment();


void setup()
{


}

void loop()
{
	int dt = 1;
	seg.display(1, seg.C, false);
	delay(dt);
	seg.display(2, seg.O, false);
	delay(dt);
	seg.display(3, seg.O, false);
	delay(dt);
	// Pass in true as the last argument of the display function to show the decimal point
	seg.display(4, seg.L, true);
	delay(dt);

}
