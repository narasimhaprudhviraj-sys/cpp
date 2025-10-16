#include<iostream>
using namespace std;
class Counter
{
	int value;
	public:
		Counter(int v = 0) : value(v) {}
		Counter operator++()
		{
			++value;
			return *this;
		}
		void display()
		{
			cout<<"value: "<< value << endl;
		}
};
int main()
{
	Counter c1(7);
	++c1;
	c1.display();
}
