#include<iostream>
using namespace std;
template <class T>
class Rectangle
{
	private:
		T Area;
	public:
		Rectangle(T L,T B)
		{
			Area=(L * B);
			
		}
		void display()
		{
			cout<<"area of Rectangle: "<<Area<<endl;
		}
};
int main()
{
	Rectangle<int>intRectangle(10,20.46); //T=int
	Rectangle<double>doubleRectangle(3.14,2.13); //T=double
	Rectangle<float>floatRectangle(5.9,2.9); //T=string
	
	intRectangle.display();
	doubleRectangle.display();
    floatRectangle.display();
}

