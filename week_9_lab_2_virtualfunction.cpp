#include<iostream>
using namespace std;
class Animal
{
	public:
		virtual void sound()
		{
			cout<<"Animal makes a sound"<<endl;
		}
};
class Dog:public Animal
{
	public:
		void sound() override
		{
			cout<<"Dog Barks"<<endl;
		}
};
class Cat:public Animal
{
	public:
		void sound() override
		{
			cout<<"Meows"<<endl;
		}
};
int main()
{
  Animal*animalPtr;
  Dog d;
  Cat c;
  animalPtr = &d;
  animalPtr->sound();
  animalPtr = &c;
  animalPtr->sound();
  return 0;	
}
