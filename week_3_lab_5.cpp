#include<iostream>
using namespace std;
class Employee
{
	private:
		string name;
		double salary;
		
	public:
		Employee& setName(string n)
		{
			this->name = n;
			return *this;
		}
		
		Employee& setSalary(double s)
		{
			this->salary=s;
			return *this;
		}
		void display()
		{
			cout<<"Name: "<<name<<"Salary: "<<salary<<endl;
		}
};
int main()
{
	Employee e;
	e.setName("Alice \n").setSalary(55000);
	e.display();
	return 0;
}
