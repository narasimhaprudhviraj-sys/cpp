#include<iostream>
using namespace std;
class Shape
{
	public:
		void areaFormula()
		{
			cout<<"Area formula depends on shape\n";
		}
};
class Circle:public Shape
{
	public:
		void drawCircle()
		{
			cout<<"Drawing circle\n";
		}
};
class Rectangle:public Shape
{
	public:
		void drawRectangle()
		{
			cout<<"Drawing rectangle\n";
		}
};
int main()
{
	Circle c;
	c.areaFormula();
	c.drawCircle();
}

