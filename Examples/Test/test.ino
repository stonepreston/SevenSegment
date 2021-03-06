#include <SevenSegment.h>

// Create SevenSegment object using default pin configuration
SevenSegment seg = SevenSegment();

const SevenSegment::Character characters[]  = { seg.A, seg.B, seg.C, seg.D, seg.E,
												seg.F, seg.H, seg.I, seg.J, seg.L,
												seg.N, seg.O, seg.P, seg.R, seg.S,
												seg.U, seg.Y, seg.Z, seg.ZERO, seg.ONE,
												seg.TWO, seg.THREE, seg.FOUR, seg.FIVE,
												seg.SIX, seg.SEVEN, seg.EIGHT, seg.NINE};



void setup() {


}

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
