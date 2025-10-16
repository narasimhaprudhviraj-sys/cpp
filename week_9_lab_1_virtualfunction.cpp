#include<iostream>
using namespace std;
class Base
{
	public:
		virtual   void display()
		{
		cout<<"Display from Derived class"<<endl;
	}
};
class Derived: public Base
{
	void display()
	{
		cout<<"Display from virtual class"<<endl;
	}
};
int main()
{
	Base*basePtr;
	Derived d;
	basePtr = &d;
	basePtr->display(); //Calls Derived version (runtime polymorphism)
	return 0;
}
