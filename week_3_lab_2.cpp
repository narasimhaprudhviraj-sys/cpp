#include<iostream>
#include<string>
using namespace std;
class Parent
{
	protected:
		int x;
	public:
		void setX(int val) {x = val; }		
};
class Child : public Parent
{
	public:
		void display()
		{
			cout<<"x = "<<x<<endl;
		}
};
int main()
{
	Child c1;
	Child c2;
	c1.setX(20);
	c1.display();
	c2.setX(30);
	c2.display();
}
