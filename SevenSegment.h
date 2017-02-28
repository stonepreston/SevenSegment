#ifndef SevenSegment_H
#define SeventSegment_H

class SevenSegment {

	///// Properties /////

	// output pins
	private:

		int pinA;
		int pinB;
		int pinC;
		int pinD;
		int pinE;
		int pinF;
		int pinG;
		int pinDP;
		int pinDigitOne;
		int pinDigitTwo;
		int pinDigitThree;
		int pinDigitFour;

	///// Methods /////

	public:

		// Constructors
		SevenSegment();
		SevenSegment(int pinDigitOne, int pinDigitTwo, int pinDigitThree, int pinDigitFour, int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG, int pinDP);

		// Getters
		int getPinDigitOne();
		int getPinDigitTwo();
		int getPinDigitThree();
		int getPinDigitFour();
		int getPinA();
		int getPinB();
		int getPinC();
		int getPinD();
		int getPinE();
		int getPinF();
		int getPinG();
		int getPinDP();

		// Setters
		void setPinDigitOne(int value);
		void setPinDigitTwo(int value);
		void setPinDigitThree(int value);
		void setPinDigitFour(int value);
		void setPinA(int value);
		void setPinB(int value);
		void setPinD(int value);
		void setPinC(int value);
		void setPinD(int value);
		void setPinE(int value);
		void setPinF(int value);
		void setPinG(int value);
		void setPinDP(int value);

		// Letters
		void a(bool decimalPoint);
		void b(bool decimalPoint);
		void c(bool decimalPoint);
		void c(bool decimalPoint);
		void d(bool decimalPoint);
		void e(bool decimalPoint);
		void f(bool decimalPoint);
		void h(bool decimalPoint);
		void i(bool decimalPoint);
		void j(bool decimalPoint);
		void l(bool decimalPoint);
		void n(bool decimalPoint);
		void o(bool decimalPoint);
		void p(bool decimalPoint);
		void r(bool decimalPoint);
		void s(bool decimalPoint);
		void u(bool decimalPoint);
		void y(bool decimalPoint);
		void z(bool decimalPoint);

		// Numbers
		void zero(bool decimalPoint);
		void one(bool decimalPoint);
		void two(bool decimalPoint);
		void three(bool decimalPoint);
		void four(bool decimalPoint);
		void five(bool decimalPoint);
		void six(bool decimalPoint);
		void seven(bool decimalPoint);
		void eight(bool decimalPoint);
		void nine(bool decimalPoint);

		// Decimal point
		void decimalPoint();

		// Digit Selectors
		void digitOne();
		void digitTwo();
		void digitThree();
		void digitFour();

};

#endif

