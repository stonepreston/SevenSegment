class SevenSegment {

	///// Properties /////

	// output pins
	int pinA;
	int pinB;
	int pinC;
	int pinD;
	int pinE;
	int pinF;
	int pinG;
	int pinDP;

	///// Methods /////

	// Constructors
	SevenSegment();
	SevenSegment(int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG, int pinDP);

	// Getters
	int getPinA();
	int getPinB();
	int getPinC();
	int getPinD();
	int getPinE();
	int getPinF();
	int getGPin();
	int getPinDP();

	// Setters
	void setPinA(int value);
	void setPinB(int value);
	void setPinD(int value);
	void setPinC(int value);
	void setPinD(int value);
	void setPinE(int value);
	void setPinF(int value);
	void setPinG(int value);

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
