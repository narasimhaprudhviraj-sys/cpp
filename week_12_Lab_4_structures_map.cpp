#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<int,string>m;
	
	m[1] = "Apple";
	m{2} = "Banana";
	m[3] = "Cherry";
	
	m.insert({4, "Mango"});
	
	cout<<"Map elements:"<<endl;
	for(auto p : m)
	cout<<p.first<<"->"<<p.second<<endl;
	
	cout<<"Value at key 2: "<<m[2]<<endl;
	
	if(m.find(3) != m.end())
	cout<<"Key 3 found with value:"<<m[3]<<endl;
	m.erase(2);
	cout<<"After deletion: "<<endl;
	for(auto p:m)
	cout<<p.first<<"->"<<p.second<<endl;
	return 0;
}
