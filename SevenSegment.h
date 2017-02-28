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
		void a();
		void b();
		void c();
		void c();
		void d();
		void e();
		void f();
		void h();
		void i();
		void j();
		void l();
		void n();
		void o();
		void p();
		void r();
		void s();
		void u();
		void y();
		void z();

		// Numbers
		void one();
		void two();
		void three();
		void four();
		void five();
		void six();
		void seven();
		void eight();
		void nine();

		// Decimal point
		void decimalPoint();

		// Digit Selectors
		void digitOne();
		void digitTwo();
		void digitThree();
		void digitFour();

};

#endif

