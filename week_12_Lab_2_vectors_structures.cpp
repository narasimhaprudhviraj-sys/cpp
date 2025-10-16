#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	
	cout<<"Vector: ";
	for(int x : v) cout<<x<<" ";
	cout<<endl;
	cout<<"First: "<<v.front()<<endl;
	cout<<"Last: "<<v.back()<<endl;
	cout<<"At index 1: "<<v.at(1)<<endl;
	v.pop_back();
	cout<<"After pop_back: ";
	for(int x:v)cout<<x<<" ";
	cout<<endl;
	
	v.insert(v.begin() + 1,15);
	cout<<"After insertion: ";
	for(int x:v) cout<<x<<" ";
	cout<<endl;
	cout<<"Size:"<<v.size()<<endl;
	cout<<"Capacity:"<<v.capacity()<<endl;
	
	return 0;
}
