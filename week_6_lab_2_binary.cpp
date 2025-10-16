#include<iostream>
using namespace std;
class Complex
{
	float real, imag;
	public:
		Complex(float r = 0, float i = 0) : real(r), imag(i) {}
		// Overload binary +
		Complex operator+(const Complex &c)
		{
			return Complex(real + c.real, imag + c.imag);
		}
		void display()
		{
			cout << real << "+" << imag << "i" << endl;
		}
};
int main()
{
	Complex c1(2.5, 3.5), c2(1.5, 2.5);
	Complex c3 = c1 + c2; //Calls c1.operator+(c2)
	c3.display(); //4 + 6i
}
