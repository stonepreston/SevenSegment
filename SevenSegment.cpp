#include <Arduino.h>

// Default Constructor
SevenSegment::SevenSegment() {

	// Initialize pins to default configuration
	// Pins 1-4 are the digit selectors
	// Pins 5-11 are segments a-g
	// Pin 12 is the decimal point
	pinDigitOne = 1;
	pinDigitTwo = 2;
	pinDigitThree = 3;
	pinDigitFour = 4;
	pinA = 5;
	pinB = 6;
	pinC = 7;
	pinD = 8;
	pinE = 9;
	pinF = 10;
	pinG = 11;
	pinDP = 12;

}

// Overloaded Constructor
SevenSegment::SevenSegment(int pinDigitOne, int pinDigitTwo, int pinDigitThree, int pinDigitFour, int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG, int pinDP) {

	// Initialize pins to default configuration
	// Pins 1-4 are the digit selectors
	// Pins 5-11 are segments a-g
	// Pin 12 is the decimal point
	this->pinDigitOne = pinDigitOne;
	this->pinDigitTwo = pinDigitTwo;
	this->pinDigitThree = pinDigitThree;
	this->pinDigitFour = pinDigitFour;
	this->pinA = pinA;
	this->pinB = pinB;
	this->pinC = pinC;
	this->pinD = pinD;
	this->pinE = pinE;
	this->pinF = pinF;
	this->pinG = pinG;
	this->pinDP = pinDP;

}

// Getters

int SevenSegment::getPinDigitOne() {

	return pinDigitOne;
}

int SevenSegment::getPinDigitTwo() {

	return pinDigitTwo;
}

int SevenSegment::getPinDigitThree() {

	return pinDigitThree;
}

int SevenSegment::getPinDigitFour() {

	return pinDigitFour;
}

int SevenSegment::getPinA() {

	return pinA;
}

int SevenSegment::getPinB() {

	return pinB;
}

int SevenSegment::getPinC() {

	return pinC;
}


int SevenSegment::getPinD() {

	return pinD;
}


int SevenSegment::getPinE() {

	return pinE;
}


int SevenSegment::getPinF() {

	return pinF;
}


int SevenSegment::getPinG() {

	return pinG;
}


int SevenSegment::getPinDP() {

	return pinDP;
}

// Setters
void SevenSegment::setPinDigitOne(int value) {

	pinDigitOne = value;
}

void SevenSegment::setPinDigitTwo(int value) {

	pinDigitTwo = value;
}


void SevenSegment::setPinDigitThree(int value) {

	pinDigitThree = value;
}


void SevenSegment::setPinDigitFour(int value) {

	pinDigitFour = value;
}

void SevenSegment::setPinA(int value) {

	pinA = value;
}

void SevenSegment::setPinB(int value) {

	pinB = value;
}

void SevenSegment::setPinC(int value) {

	pinC = value;
}

void SevenSegment::setPinD(int value) {

	pinD = value;
}

void SevenSegment::setPinE(int value) {

	pinE = value;
}

void SevenSegment::setPinF(int value) {

	pinF = value;
}

void SevenSegment::setPinG(int value) {

	pinG = value;
}

void SevenSegment::setPinDP(int value) {

	pinDP = value;

}

// Digit Selectors
void SevenSegment::digitOne() {

	digitalWrite(getPinDigitOne(), LOW);
	digitalWrite(getPinDigitTwo(), HIGH);
	digitalWrite(getPinDigitThree(), HIGH);
	digitalWrite(getPinDigitFour(), HIGH);

}

void SevenSegment::digitTwo() {

	digitalWrite(getPinDigitOne(), HIGH);
	digitalWrite(getPinDigitTwo(), LOW);
	digitalWrite(getPinDigitThree(), HIGH);
	digitalWrite(getPinDigitFour(), HIGH);

}

void SevenSegment::digitThree() {

	digitalWrite(getPinDigitOne(), HIGH);
	digitalWrite(getPinDigitTwo(), HIGH);
	digitalWrite(getPinDigitThree(), LOW);
	digitalWrite(getPinDigitFour(), HIGH);

}

void SevenSegment::digitFour() {

	digitalWrite(getPinDigitOne(), HIGH);
	digitalWrite(getPinDigitTwo(), HIGH);
	digitalWrite(getPinDigitThree(), HIGH);
	digitalWrite(getPinDigitFour(), LOW);

}

// Letters
void SevenSegment::a(bool decimalPoint) {

	digitalWrite(getPinA(), HIGH);
	digitalWrite(getPinB(), HIGH);
	digitalWrite(getPinC(), HIGH);
	digitalWrite(getPinD(), LOW);
	digitalWrite(getPinE(), HIGH);
	digitalWrite(getPinF(), HIGH);
	digitalWrite(getPinG(), HIGH);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::b(bool decimalPoint) {

	digitalWrite(getPinA(), LOW);
	digitalWrite(getPinB(), LOW);
	digitalWrite(getPinC(), HIGH);
	digitalWrite(getPinD(), HIGH);
	digitalWrite(getPinE(), HIGH);
	digitalWrite(getPinF(), HIGH);
	digitalWrite(getPinG(), HIGH);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::c(bool decimalPoint) {

	digitalWrite(getPinA(), HIGH);
	digitalWrite(getPinB(), LOW);
	digitalWrite(getPinC(), LOW);
	digitalWrite(getPinD(), HIGH);
	digitalWrite(getPinE(), HIGH);
	digitalWrite(getPinF(), HIGH);
	digitalWrite(getPinG(), LOW);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::c(bool decimalPoint) {

	digitalWrite(getPinA(), HIGH);
	digitalWrite(getPinB(), LOW);
	digitalWrite(getPinC(), LOW);
	digitalWrite(getPinD(), HIGH);
	digitalWrite(getPinE(), HIGH);
	digitalWrite(getPinF(), HIGH);
	digitalWrite(getPinG(), LOW);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::d(bool decimalPoint) {

	digitalWrite(getPinA(), LOW);
	digitalWrite(getPinB(), HIGH);
	digitalWrite(getPinC(), HIGH);
	digitalWrite(getPinD(), HIGH);
	digitalWrite(getPinE(), HIGH);
	digitalWrite(getPinF(), LOW);
	digitalWrite(getPinG(), HIGH);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::e(bool decimalPoint) {

	digitalWrite(getPinA(), HIGH);
	digitalWrite(getPinB(), LOW);
	digitalWrite(getPinC(), LOW);
	digitalWrite(getPinD(), HIGH);
	digitalWrite(getPinE(), HIGH);
	digitalWrite(getPinF(), HIGH);
	digitalWrite(getPinG(), HIGH);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::f(bool decimalPoint) {

	digitalWrite(getPinA(), HIGH);
	digitalWrite(getPinB(), LOW);
	digitalWrite(getPinC(), LOW);
	digitalWrite(getPinD(), LOW);
	digitalWrite(getPinE(), HIGH);
	digitalWrite(getPinF(), HIGH);
	digitalWrite(getPinG(), HIGH);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::h(bool decimalPoint) {

	digitalWrite(getPinA(), LOW);
	digitalWrite(getPinB(), HIGH);
	digitalWrite(getPinC(), HIGH);
	digitalWrite(getPinD(), LOW);
	digitalWrite(getPinE(), HIGH);
	digitalWrite(getPinF(), HIGH);
	digitalWrite(getPinG(), HIGH);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::i(bool decimalPoint) {

	digitalWrite(getPinA(), LOW);
	digitalWrite(getPinB(), LOW);
	digitalWrite(getPinC(), LOW);
	digitalWrite(getPinD(), LOW);
	digitalWrite(getPinE(), HIGH);
	digitalWrite(getPinF(), HIGH);
	digitalWrite(getPinG(), LOW);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::j(bool decimalPoint) {

	digitalWrite(getPinA(), LOW);
	digitalWrite(getPinB(), HIGH);
	digitalWrite(getPinC(), HIGH);
	digitalWrite(getPinD(), HIGH);
	digitalWrite(getPinE(), LOW);
	digitalWrite(getPinF(), LOW);
	digitalWrite(getPinG(), LOW);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::l(bool decimalPoint) {

	digitalWrite(getPinA(), LOW);
	digitalWrite(getPinB(), LOW);
	digitalWrite(getPinC(), LOW);
	digitalWrite(getPinD(), HIGH);
	digitalWrite(getPinE(), HIGH);
	digitalWrite(getPinF(), HIGH);
	digitalWrite(getPinG(), LOW);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::n(bool decimalPoint) {

	digitalWrite(getPinA(), LOW);
	digitalWrite(getPinB(), LOW);
	digitalWrite(getPinC(), HIGH);
	digitalWrite(getPinD(), LOW);
	digitalWrite(getPinE(), HIGH);
	digitalWrite(getPinF(), LOW);
	digitalWrite(getPinG(), HIGH);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::o(bool decimalPoint) {

	digitalWrite(getPinA(), LOW);
	digitalWrite(getPinB(), LOW);
	digitalWrite(getPinC(), HIGH);
	digitalWrite(getPinD(), HIGH);
	digitalWrite(getPinE(), HIGH);
	digitalWrite(getPinF(), LOW);
	digitalWrite(getPinG(), HIGH);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::p(bool decimalPoint) {

	digitalWrite(getPinA(), HIGH);
	digitalWrite(getPinB(), HIGH);
	digitalWrite(getPinC(), LOW);
	digitalWrite(getPinD(), LOW);
	digitalWrite(getPinE(), HIGH);
	digitalWrite(getPinF(), HIGH);
	digitalWrite(getPinG(), HIGH);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::r(bool decimalPoint) {

	digitalWrite(getPinA(), LOW);
	digitalWrite(getPinB(), LOW);
	digitalWrite(getPinC(), LOW);
	digitalWrite(getPinD(), LOW);
	digitalWrite(getPinE(), HIGH);
	digitalWrite(getPinF(), LOW);
	digitalWrite(getPinG(), HIGH);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::s(bool decimalPoint) {

	digitalWrite(getPinA(), HIGH);
	digitalWrite(getPinB(), LOW);
	digitalWrite(getPinC(), HIGH);
	digitalWrite(getPinD(), HIGH);
	digitalWrite(getPinE(), LOW);
	digitalWrite(getPinF(), HIGH);
	digitalWrite(getPinG(), HIGH);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::u(bool decimalPoint) {

	digitalWrite(getPinA(), LOW);
	digitalWrite(getPinB(), HIGH);
	digitalWrite(getPinC(), HIGH);
	digitalWrite(getPinD(), HIGH);
	digitalWrite(getPinE(), HIGH);
	digitalWrite(getPinF(), HIGH);
	digitalWrite(getPinG(), LOW);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::y(bool decimalPoint) {

	digitalWrite(getPinA(), LOW);
	digitalWrite(getPinB(), HIGH);
	digitalWrite(getPinC(), HIGH);
	digitalWrite(getPinD(), HIGH);
	digitalWrite(getPinE(), LOW);
	digitalWrite(getPinF(), HIGH);
	digitalWrite(getPinG(), HIGH);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::z(bool decimalPoint) {

	digitalWrite(getPinA(), HIGH);
	digitalWrite(getPinB(), HIGH);
	digitalWrite(getPinC(), LOW);
	digitalWrite(getPinD(), HIGH);
	digitalWrite(getPinE(), HIGH);
	digitalWrite(getPinF(), LOW);
	digitalWrite(getPinG(), HIGH);
	digitalWrite(getPinDP(), decimalPoint);

}

// Numbers

void SevenSegment::zero(bool decimalPoint) {

	digitalWrite(getPinA(), HIGH);
	digitalWrite(getPinB(), HIGH);
	digitalWrite(getPinC(), HIGH);
	digitalWrite(getPinD(), HIGH);
	digitalWrite(getPinE(), HIGH);
	digitalWrite(getPinF(), HIGH);
	digitalWrite(getPinG(), LOW);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::one(bool decimalPoint) {

	digitalWrite(getPinA(), LOW);
	digitalWrite(getPinB(), HIGH);
	digitalWrite(getPinC(), HIGH);
	digitalWrite(getPinD(), LOW);
	digitalWrite(getPinE(), LOW);
	digitalWrite(getPinF(), LOW);
	digitalWrite(getPinG(), LOW);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::two(bool decimalPoint) {

	digitalWrite(getPinA(), HIGH);
	digitalWrite(getPinB(), HIGH);
	digitalWrite(getPinC(), LOW);
	digitalWrite(getPinD(), HIGH);
	digitalWrite(getPinE(), HIGH);
	digitalWrite(getPinF(), LOW);
	digitalWrite(getPinG(), HIGH);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::three(bool decimalPoint) {

	digitalWrite(getPinA(), HIGH);
	digitalWrite(getPinB(), HIGH);
	digitalWrite(getPinC(), HIGH);
	digitalWrite(getPinD(), HIGH);
	digitalWrite(getPinE(), LOW);
	digitalWrite(getPinF(), LOW);
	digitalWrite(getPinG(), HIGH);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::four(bool decimalPoint) {

	digitalWrite(getPinA(), LOW);
	digitalWrite(getPinB(), HIGH);
	digitalWrite(getPinC(), HIGH);
	digitalWrite(getPinD(), LOW);
	digitalWrite(getPinE(), LOW);
	digitalWrite(getPinF(), HIGH);
	digitalWrite(getPinG(), HIGH);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::five(bool decimalPoint) {

	digitalWrite(getPinA(), HIGH);
	digitalWrite(getPinB(), LOW);
	digitalWrite(getPinC(), HIGH);
	digitalWrite(getPinD(), HIGH);
	digitalWrite(getPinE(), LOW);
	digitalWrite(getPinF(), HIGH);
	digitalWrite(getPinG(), HIGH);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::six(bool decimalPoint) {

	digitalWrite(getPinA(), HIGH);
	digitalWrite(getPinB(), LOW);
	digitalWrite(getPinC(), HIGH);
	digitalWrite(getPinD(), HIGH);
	digitalWrite(getPinE(), HIGH);
	digitalWrite(getPinF(), HIGH);
	digitalWrite(getPinG(), HIGH);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::seven(bool decimalPoint) {

	digitalWrite(getPinA(), HIGH);
	digitalWrite(getPinB(), HIGH);
	digitalWrite(getPinC(), HIGH);
	digitalWrite(getPinD(), LOW);
	digitalWrite(getPinE(), LOW);
	digitalWrite(getPinF(), LOW);
	digitalWrite(getPinG(), LOW);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::eight(bool decimalPoint) {

	digitalWrite(getPinA(), HIGH);
	digitalWrite(getPinB(), HIGH);
	digitalWrite(getPinC(), HIGH);
	digitalWrite(getPinD(), HIGH);
	digitalWrite(getPinE(), HIGH);
	digitalWrite(getPinF(), HIGH);
	digitalWrite(getPinG(), HIGH);
	digitalWrite(getPinDP(), decimalPoint);

}

void SevenSegment::nine(bool decimalPoint) {

	digitalWrite(getPinA(), HIGH);
	digitalWrite(getPinB(), HIGH);
	digitalWrite(getPinC(), HIGH);
	digitalWrite(getPinD(), LOW);
	digitalWrite(getPinE(), LOW);
	digitalWrite(getPinF(), HIGH);
	digitalWrite(getPinG(), HIGH);
	digitalWrite(getPinDP(), decimalPoint);

}
















