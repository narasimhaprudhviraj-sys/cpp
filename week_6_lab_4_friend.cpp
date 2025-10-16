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
		//friend function for binary + operator
		friend Number operator+(const Number &n1,const Number &n2);
		//friend function for urinary - operator
		friend Number operator-(const Number &n);
		void display() const
		{
			cout<<"Value:"<<value<<endl;
		}
};
//Binary operator overloading using friend function
Number operator+(const Number &n1, const Number &n2)
{
	return Number(n1.value + n2.value);
}
//Urinary operator overloading using friend function
Number operator-(const Number &n)
{
	return Number(-n.value);
}
int main()
{
	Number num1(15), num2(25), result;
	//Binary operator(+) overloading
	result = num1 + num2;
	cout<<"Result of num1 + num2: ";
	result.display();
	//Urinary operator(-) overloading
	result = -num1;
	cout<<"Result of -num1: ";
	result.display();
	return 0;
}
