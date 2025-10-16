#include<iostream>
using namespace std;

class Box
{
	private:
		double length;
		double width;
		double height;
		
	public:
		Box(double l, double w, double h)
		{
			length = l;
			width = w;
			height = h;
		}
	    friend double calculateVolume(Box b);
};
double calculateVolume(Box b)
{
	return b.length * b.width * b.height;
}
int main()
{
	Box box1(5.0,3.0,2.0);
	cout<<"Volume of the box: "<<calculateVolume(box1)<<endl;
	return 0;
}
