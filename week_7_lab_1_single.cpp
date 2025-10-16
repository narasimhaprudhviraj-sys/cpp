//Single Inheritance
#include<iostream>
class Animal
{
	public:
		void eat()
		{
		cout<<"Eating...\n";
		}
};
class Dog: public Animal
{
	public:
		void bark()
		{
			cout<<"Barking...\n";
		}
};
int main()
{
	Dog d;
	d.eat();//from Animal
	d.bark();//from Dog
	
}
