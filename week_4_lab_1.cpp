#include<iostream>
using namespace std;
void display(int num)
{
	cout<<"Displaying int: "<<num<<endl;
}
void display(double sum)
{
	cout<<"Displaying double: "<<sum<<endl;
}
void display(int num1, int num2)
{
	cout<<"Displaying two ints:"<<num1<<"and"<<num2<<endl;
}
int main()
{
	display(5);
    display(5.5);
    display(10,20);
    return 0;
}
