#include<iostream>
using namespace std;
class Student
{
	private:
		string name;
		int age;
		
	public:
		void setData(string n, int a)
		{
			name = n;
			age = a;
		}
		
	void display()
	{
		cout<<"Name: "<<name<<",Age:"<<age<<endl;
	}
};
int main()
{
	Student s1;
	Student *ptr;
	ptr = &s1;
	ptr->setData("Alice",116);
	ptr->display();
	Student *s2 = new Student;
	s2->setData("Bob",23);
	s2->display();
	delete s2;
	s2->setData("Kailash",30);
	return 0;
}
