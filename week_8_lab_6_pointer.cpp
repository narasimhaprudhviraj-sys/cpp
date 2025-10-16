#include<iostream>
using namespace std;
class Student
{
	public:
		int id;
		string name;
		
		void display()
		{
			cout<<"ID:"<<id<<"\nNAME:"<<name<<endl;
		}
		
};
int main()
{
	Student s1;
	s1.id = 101;
	s1.name = "Kailash";
	Student *ptr;
	ptr = &s1;
	ptr->display();
	cout<<ptr->id;
}
