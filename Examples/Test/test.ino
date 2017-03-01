#include "Arduino.h"
#include "SevenSegment.h"

// Create SevenSegment object using default pin configuration
SevenSegment seg = SevenSegment();

const char characters[]  = {'a', 'b', 'c', 'd', 'e', 'f', 'h', 'i', 'j',
					  'l', 'n', 'o', 'p', 'r', 's', 'u', 'y', 'z',
					  '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};


//The setup function is called once at startup of the sketch
void setup() {
	// initialize output pins 1-12
	for (int i = 1; i <= 12; i++) {
		pinMode(i,OUTPUT);
	}

}

// The loop function is called in an endless loop
void loop() {

	// Loop over each digit
	for (int digit = 1; digit <= 4; digit++) {

		// Loop over every character
		for(unsigned int i = 0; i < sizeof(characters)/sizeof(characters[0]); i++) {

			seg.display(digit, characters[i], true);
			delay(250);
			seg.display(digit, characters[i], false);
			delay(250);
		}

	}

}
