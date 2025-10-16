#include<iostream>
using namespace std;
double calculateinterest(double principal, double rate = 5.0, int time = 1)
{
	return (principal * rate * time)/100;
}
int main()
{
	double principal;
	cout<<"Enter the principal amount: ";
	cin>>principal;
	cout<<"Interest(P = 1000,R = 6.5,T = 2): "<<calculateinterest(1000,6.5,2)<<endl;
	cout<<"Interest(P = 1000,R = 6.5,T = default): "<<calculateinterest(1000,6.5)<<endl;
	cout<<"Interest(P = 1000,R = default,T = default): "<<calculateinterest(1000)<<endl;
	return 0;
}
