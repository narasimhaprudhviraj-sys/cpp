#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> i = {10,20,30};
	i.push_front(5);
	i.push_back(40);
	
	cout<<"List elements: ";
	for(int x:|)
	cout<<x<<" ";
	cout<<endl;
	
	
	i.pop_front();
	i.pop_back();
	
	cout<<"After pop Operations: ";
	for(int x:|)
	cout<<x<<" ";
	cout<<endl;
	
	i.push_back(25);
	i.push_back(15);
	i.sort();
	cout<<"Sorted: ";
	for(int x: |)
	cout<<x<<" ";
	cout<<endl;
	
	i.reverse();
	cout<<"Reversed: ";
	for(int x: |)
	cout<<x<<" ";
	return 0;
	
}
