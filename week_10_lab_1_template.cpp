#include<iostream>
using namespace std;
template <typename T>
T getMax(T a,T b)
{
	return (a > b)?a:b;
}
int main()
{
	cout<<getMax<int>(10,20)<<endl; //Works for int
	cout<<getMax<double>(3.5,7.2)<<endl; //Works for double
	cout<<getMax<char>('A','Z')<<endl; //Works for char
	
	cout<<getMax(100,200)<<endl  ; //compiler infers T as int
	cout<<getMax(5.5,2.2); //compiler infers T as double

	return 0;
}
