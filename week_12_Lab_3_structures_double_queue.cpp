#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int> d;
	
	d.push_back(10);
	d.push_front(5);
	d.push_back(20);
	
	cout<<"deque: ";
	for(int x:d) cout<<x<<" ";
	cout<<endl;
	
	cout<<"First: "<<d.front()<<endl;
	cout<<"Last: "<<d.back()<<endl;
	cout<<"At index 1:"<<d.at(1)<<endl;
	cout<<"At index 2:"<<d[2]<<endl;
	d.pop_front();
	d.pop_back();
	
	cout<<"After pop operations: ";
	for(int x:d)cout<<x<<" ";
	cout<<endl;
	
	d.insert(d.begin(),15);
	
	cout<<"After insertion:";
	for(int x:d) cout<<x<<" ";
	cout<<endl;
	
	cout<<"Size: "<<d.size()<<endl;
	
	return 0;
}
