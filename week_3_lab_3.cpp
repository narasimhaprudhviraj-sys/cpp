#include<iostream>
using namespace std;
inline int square(int x) {return x * x;}
inline int cube(int x) {return x * x * x;}
int main()
{
	cout<<"Square of 5 is:"<<square(5)<<endl;
	cout<<"Cube of 5 is: "<<cube(5)<<endl;
	return 0;
}
