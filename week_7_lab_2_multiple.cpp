#include<iostream>
using namespace std;
class engine
{
	public:
		void start()
		{
			cout<<"Engine started\n";
		}
};
class Wheels
{
	public:
		void rotate()
		{
			cout<<"Wheels rotating\n";
		}
};
class Car: public engine,public Wheels
{
	public:
		void drive()
		{
			cout<<"Car is moving\n";
		}
};
int main()
{
	Car c;
	c.start();
	c.rotate();
	c.drive();
}
