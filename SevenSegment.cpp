#include <Arduino.h>
#include "SevenSegment.h"

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

	// set pin modes
	for (int i=1; i<=12; i++) {
		pinMode(i, OUTPUT);
	}

}

// Overloaded Constructor
SevenSegment::SevenSegment(int pinDigitOne, int pinDigitTwo, int pinDigitThree, int pinDigitFour, int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG, int pinDP) {

	// Initialize pins to a custom configuration
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

	// set pin modes
	pinMode(pinDigitOne, OUTPUT);
	pinMode(pinDigitTwo, OUTPUT);
	pinMode(pinDigitThree, OUTPUT);
	pinMode(pinDigitFour, OUTPUT);
	pinMode(pinA, OUTPUT);
	pinMode(pinB, OUTPUT);
	pinMode(pinC, OUTPUT);
	pinMode(pinD, OUTPUT);
	pinMode(pinE, OUTPUT);
	pinMode(pinF, OUTPUT);
	pinMode(pinG, OUTPUT);
	pinMode(pinDP, OUTPUT);


}

// Main display function
void SevenSegment::display(int digit, Character x, bool decimalPoint) {

	// Select a digit to display a character at
	switch (digit) {

	case 1:
		digitOne();
		break;
	case 2:
		digitTwo();
		break;
	case 3:
		digitThree();
		break;
	case 4:
		digitFour();
		break;
	default:
		digitOne();
		break;

	}

	// Display a character
	switch (x) {

		case 'a':
			a(decimalPoint);
			break;
		case 'b':
			b(decimalPoint);
			break;
		case 'c':
			c(decimalPoint);
			break;
		case 'd':
			d(decimalPoint);
			break;
		case 'e':
			e(decimalPoint);
			break;
		case 'f':
			f(decimalPoint);
			break;
		case 'h':
			h(decimalPoint);
			break;
		case 'i':
			i(decimalPoint);
			break;
		case 'j':
			j(decimalPoint);
			break;
		case 'l':
			l(decimalPoint);
			break;
		case 'n':
			n(decimalPoint);
			break;
		case 'o':
			o(decimalPoint);
			break;
		case 'p':
			p(decimalPoint);
			break;
		case 'r':
			r(decimalPoint);
			break;
		case 's':
			s(decimalPoint);
			break;
		case 'u':
			u(decimalPoint);
			break;
		case 'y':
			y(decimalPoint);
			break;
		case 'z':
			z(decimalPoint);
			break;
		case '0':
			zero(decimalPoint);
			break;
		case '1':
			one(decimalPoint);
			break;
		case '2':
			two(decimalPoint);
			break;
		case '3':
			three(decimalPoint);
			break;
		case '4':
			four(decimalPoint);
			break;
		case '5':
			five(decimalPoint);
			break;
		case '6':
			six(decimalPoint);
			break;
		case '7':
			seven(decimalPoint);
			break;
		case '8':
			eight(decimalPoint);
			break;
		case '9':
			nine(decimalPoint);
			break;
		default:
			zero(decimalPoint);
			break;

	}

}



// Digit Selectors
void SevenSegment::digitOne() {

	digitalWrite(pinDigitOne, LOW);
	digitalWrite(pinDigitTwo, HIGH);
	digitalWrite(pinDigitThree, HIGH);
	digitalWrite(pinDigitFour, HIGH);

}

void SevenSegment::digitTwo() {

	digitalWrite(pinDigitOne, HIGH);
	digitalWrite(pinDigitTwo, LOW);
	digitalWrite(pinDigitThree, HIGH);
	digitalWrite(pinDigitFour, HIGH);

}

void SevenSegment::digitThree() {

	digitalWrite(pinDigitOne, HIGH);
	digitalWrite(pinDigitTwo, HIGH);
	digitalWrite(pinDigitThree, LOW);
	digitalWrite(pinDigitFour, HIGH);

}

void SevenSegment::digitFour() {

	digitalWrite(pinDigitOne, HIGH);
	digitalWrite(pinDigitTwo, HIGH);
	digitalWrite(pinDigitThree, HIGH);
	digitalWrite(pinDigitFour, LOW);

}

// Letters
void SevenSegment::a(bool decimalPoint) {

	digitalWrite(pinA, HIGH);
	digitalWrite(pinB, HIGH);
	digitalWrite(pinC, HIGH);
	digitalWrite(pinD, LOW);
	digitalWrite(pinE, HIGH);
	digitalWrite(pinF, HIGH);
	digitalWrite(pinG, HIGH);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::b(bool decimalPoint) {

	digitalWrite(pinA, LOW);
	digitalWrite(pinB, LOW);
	digitalWrite(pinC, HIGH);
	digitalWrite(pinD, HIGH);
	digitalWrite(pinE, HIGH);
	digitalWrite(pinF, HIGH);
	digitalWrite(pinG, HIGH);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::c(bool decimalPoint) {

	digitalWrite(pinA, HIGH);
	digitalWrite(pinB, LOW);
	digitalWrite(pinC, LOW);
	digitalWrite(pinD, HIGH);
	digitalWrite(pinE, HIGH);
	digitalWrite(pinF, HIGH);
	digitalWrite(pinG, LOW);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::d(bool decimalPoint) {

	digitalWrite(pinA, LOW);
	digitalWrite(pinB, HIGH);
	digitalWrite(pinC, HIGH);
	digitalWrite(pinD, HIGH);
	digitalWrite(pinE, HIGH);
	digitalWrite(pinF, LOW);
	digitalWrite(pinG, HIGH);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::e(bool decimalPoint) {

	digitalWrite(pinA, HIGH);
	digitalWrite(pinB, LOW);
	digitalWrite(pinC, LOW);
	digitalWrite(pinD, HIGH);
	digitalWrite(pinE, HIGH);
	digitalWrite(pinF, HIGH);
	digitalWrite(pinG, HIGH);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::f(bool decimalPoint) {

	digitalWrite(pinA, HIGH);
	digitalWrite(pinB, LOW);
	digitalWrite(pinC, LOW);
	digitalWrite(pinD, LOW);
	digitalWrite(pinE, HIGH);
	digitalWrite(pinF, HIGH);
	digitalWrite(pinG, HIGH);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::h(bool decimalPoint) {

	digitalWrite(pinA, LOW);
	digitalWrite(pinB, HIGH);
	digitalWrite(pinC, HIGH);
	digitalWrite(pinD, LOW);
	digitalWrite(pinE, HIGH);
	digitalWrite(pinF, HIGH);
	digitalWrite(pinG, HIGH);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::i(bool decimalPoint) {

	digitalWrite(pinA, LOW);
	digitalWrite(pinB, LOW);
	digitalWrite(pinC, LOW);
	digitalWrite(pinD, LOW);
	digitalWrite(pinE, HIGH);
	digitalWrite(pinF, HIGH);
	digitalWrite(pinG, LOW);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::j(bool decimalPoint) {

	digitalWrite(pinA, LOW);
	digitalWrite(pinB, HIGH);
	digitalWrite(pinC, HIGH);
	digitalWrite(pinD, HIGH);
	digitalWrite(pinE, LOW);
	digitalWrite(pinF, LOW);
	digitalWrite(pinG, LOW);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::l(bool decimalPoint) {

	digitalWrite(pinA, LOW);
	digitalWrite(pinB, LOW);
	digitalWrite(pinC, LOW);
	digitalWrite(pinD, HIGH);
	digitalWrite(pinE, HIGH);
	digitalWrite(pinF, HIGH);
	digitalWrite(pinG, LOW);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::n(bool decimalPoint) {

	digitalWrite(pinA, LOW);
	digitalWrite(pinB, LOW);
	digitalWrite(pinC, HIGH);
	digitalWrite(pinD, LOW);
	digitalWrite(pinE, HIGH);
	digitalWrite(pinF, LOW);
	digitalWrite(pinG, HIGH);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::o(bool decimalPoint) {

	digitalWrite(pinA, LOW);
	digitalWrite(pinB, LOW);
	digitalWrite(pinC, HIGH);
	digitalWrite(pinD, HIGH);
	digitalWrite(pinE, HIGH);
	digitalWrite(pinF, LOW);
	digitalWrite(pinG, HIGH);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::p(bool decimalPoint) {

	digitalWrite(pinA, HIGH);
	digitalWrite(pinB, HIGH);
	digitalWrite(pinC, LOW);
	digitalWrite(pinD, LOW);
	digitalWrite(pinE, HIGH);
	digitalWrite(pinF, HIGH);
	digitalWrite(pinG, HIGH);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::r(bool decimalPoint) {

	digitalWrite(pinA, LOW);
	digitalWrite(pinB, LOW);
	digitalWrite(pinC, LOW);
	digitalWrite(pinD, LOW);
	digitalWrite(pinE, HIGH);
	digitalWrite(pinF, LOW);
	digitalWrite(pinG, HIGH);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::s(bool decimalPoint) {

	digitalWrite(pinA, HIGH);
	digitalWrite(pinB, LOW);
	digitalWrite(pinC, HIGH);
	digitalWrite(pinD, HIGH);
	digitalWrite(pinE, LOW);
	digitalWrite(pinF, HIGH);
	digitalWrite(pinG, HIGH);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::u(bool decimalPoint) {

	digitalWrite(pinA, LOW);
	digitalWrite(pinB, HIGH);
	digitalWrite(pinC, HIGH);
	digitalWrite(pinD, HIGH);
	digitalWrite(pinE, HIGH);
	digitalWrite(pinF, HIGH);
	digitalWrite(pinG, LOW);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::y(bool decimalPoint) {

	digitalWrite(pinA, LOW);
	digitalWrite(pinB, HIGH);
	digitalWrite(pinC, HIGH);
	digitalWrite(pinD, HIGH);
	digitalWrite(pinE, LOW);
	digitalWrite(pinF, HIGH);
	digitalWrite(pinG, HIGH);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::z(bool decimalPoint) {

	digitalWrite(pinA, HIGH);
	digitalWrite(pinB, HIGH);
	digitalWrite(pinC, LOW);
	digitalWrite(pinD, HIGH);
	digitalWrite(pinE, HIGH);
	digitalWrite(pinF, LOW);
	digitalWrite(pinG, HIGH);
	digitalWrite(pinDP, decimalPoint);

}

// Numbers

void SevenSegment::zero(bool decimalPoint) {

	digitalWrite(pinA, HIGH);
	digitalWrite(pinB, HIGH);
	digitalWrite(pinC, HIGH);
	digitalWrite(pinD, HIGH);
	digitalWrite(pinE, HIGH);
	digitalWrite(pinF, HIGH);
	digitalWrite(pinG, LOW);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::one(bool decimalPoint) {

	digitalWrite(pinA, LOW);
	digitalWrite(pinB, HIGH);
	digitalWrite(pinC, HIGH);
	digitalWrite(pinD, LOW);
	digitalWrite(pinE, LOW);
	digitalWrite(pinF, LOW);
	digitalWrite(pinG, LOW);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::two(bool decimalPoint) {

	digitalWrite(pinA, HIGH);
	digitalWrite(pinB, HIGH);
	digitalWrite(pinC, LOW);
	digitalWrite(pinD, HIGH);
	digitalWrite(pinE, HIGH);
	digitalWrite(pinF, LOW);
	digitalWrite(pinG, HIGH);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::three(bool decimalPoint) {

	digitalWrite(pinA, HIGH);
	digitalWrite(pinB, HIGH);
	digitalWrite(pinC, HIGH);
	digitalWrite(pinD, HIGH);
	digitalWrite(pinE, LOW);
	digitalWrite(pinF, LOW);
	digitalWrite(pinG, HIGH);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::four(bool decimalPoint) {

	digitalWrite(pinA, LOW);
	digitalWrite(pinB, HIGH);
	digitalWrite(pinC, HIGH);
	digitalWrite(pinD, LOW);
	digitalWrite(pinE, LOW);
	digitalWrite(pinF, HIGH);
	digitalWrite(pinG, HIGH);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::five(bool decimalPoint) {

	digitalWrite(pinA, HIGH);
	digitalWrite(pinB, LOW);
	digitalWrite(pinC, HIGH);
	digitalWrite(pinD, HIGH);
	digitalWrite(pinE, LOW);
	digitalWrite(pinF, HIGH);
	digitalWrite(pinG, HIGH);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::six(bool decimalPoint) {

	digitalWrite(pinA, HIGH);
	digitalWrite(pinB, LOW);
	digitalWrite(pinC, HIGH);
	digitalWrite(pinD, HIGH);
	digitalWrite(pinE, HIGH);
	digitalWrite(pinF, HIGH);
	digitalWrite(pinG, HIGH);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::seven(bool decimalPoint) {

	digitalWrite(pinA, HIGH);
	digitalWrite(pinB, HIGH);
	digitalWrite(pinC, HIGH);
	digitalWrite(pinD, LOW);
	digitalWrite(pinE, LOW);
	digitalWrite(pinF, LOW);
	digitalWrite(pinG, LOW);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::eight(bool decimalPoint) {

	digitalWrite(pinA, HIGH);
	digitalWrite(pinB, HIGH);
	digitalWrite(pinC, HIGH);
	digitalWrite(pinD, HIGH);
	digitalWrite(pinE, HIGH);
	digitalWrite(pinF, HIGH);
	digitalWrite(pinG, HIGH);
	digitalWrite(pinDP, decimalPoint);

}

void SevenSegment::nine(bool decimalPoint) {

	digitalWrite(pinA, HIGH);
	digitalWrite(pinB, HIGH);
	digitalWrite(pinC, HIGH);
	digitalWrite(pinD, LOW);
	digitalWrite(pinE, LOW);
	digitalWrite(pinF, HIGH);
	digitalWrite(pinG, HIGH);
	digitalWrite(pinDP, decimalPoint);

}
















