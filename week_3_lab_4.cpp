#include<iostream>
using namespace std;
class Student
{
	private:
		string name;
		int age;
		
	public:
		Student(string name, int age)
		{
			this->name = name;
			this->age = age;
		}
	void display()
	{
		cout<<"Name: "<<this->name<<"Age: "<<age<<endl;
	}	
};
int main()
{
	Student s("Kailash",448);
	s.display();
	return 0;
}
