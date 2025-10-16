#include<iostream>
#include<string>
using namespace std;
int main()
{
  int choice;
  cout<<"Choose an option to throw an exception: "<<endl;
  cout<<"1. Integer Exception"<<endl;
  cout<<"2. Character Exception"<<endl;
  cout<<"3. String Exception"<<endl;
  cout<<"Enter choice: ";
  cin>>choice;
  try
  {
  	if(choice == 1)
  	{
  	 throw 100;	
	}
	else if(choice == 2)
	{
		throw 'E';
	}
	else if(choice == 3)
	{
		throw string("This is a string exception");
	}
	else
	{
		cout<<"No exception thrown"<<endl;
	}
  }
  catch(int e)
  {
  	cout<<"Caught an integer exception:"<<e<<endl;
  }
  catch(char e)
  {
  	cout<<"Caught an character exception: "<<e<<endl;
  }
  catch(string &e)
  {
  	 cout<<"Caught a string exception: "<<e<<endl;
  }
  cout<<"Program continues after handling execution..."<<endl;
  return 0;
}
