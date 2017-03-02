#ifndef SevenSegment_H
#define SevenSegment_H

class SevenSegment {


	private:

		// output pins
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

		// Letters
		void a(bool decimalPoint);
		void b(bool decimalPoint);
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

	public:

		enum Character {A ='a', B = 'b', C= 'c', D = 'd', E = 'e', F = 'f', H = 'h',
						I = 'i', J = 'j', L = 'l', N = 'n', O = 'o', P = 'p', R = 'r',
						S = 's', U = 'u', Y = 'y', Z = 'z',
						ZERO = '0', ONE = '1', TWO = '2', THREE = '3', FOUR = '4',
						FIVE = '5', SIX = '6', SEVEN = '7', EIGHT = '8', NINE='9'};

		// Constructors
		SevenSegment();
		SevenSegment(int pinDigitOne, int pinDigitTwo, int pinDigitThree, int pinDigitFour, int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG, int pinDP);

		// Main display function
		void display(int digit, Character c, bool decimalPoint);





};

#endif

