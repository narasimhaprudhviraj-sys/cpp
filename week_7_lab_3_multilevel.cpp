#include<iostream>
using namespace std;
class livingbeing
{
	public:
		void breathe()
		{
			cout<<"Breathing\n";
		}
};
class Animal:public livingbeing
{
	public:
		void eat()
		{
			cout<<"Eating\n";
		}
};
class Dog:public Animal
{
	public:
		void bark()
		{
			cout<<"Barking\n";
		}
};
int main()
{
	Dog d;
	d.breathe();
	d.eat();
	d.bark();
}
	

