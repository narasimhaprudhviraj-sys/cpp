#include<iostream>
using namespace std;
class Number
{
	private:
		int value;
	public:
		//Constructor
		Number(int v = 0)
		{
			value = v;
		}
		//Urinary operator overloading: - (negation)
		Number operator-()
		{
			return Number(-value);
		}
		// Binary operator overloading: + (addition)
		Number operator+(const Number &other)
		{
			return Number(this->value + other.value);
		}
		void display() const
		{
			cout<<"Value:"<<value<<endl;
		}
};
int main()
{
	Number num1(10), num2(20), result;
	//Binary operator overloading
	result = num1 + num2; //Calls operator +()
	cout<<"Result of num1 + num2:";
	result.display();
	//Urinary operator overloading
	result = -num1; //Calls operator-()
	cout<<"Result of -num1:";
	result.display();
	return 0;
}

