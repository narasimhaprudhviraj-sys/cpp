#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
	private:
		int accountNumber;
		string name;
		double balance;
		
		public:
			BankAccount(int accNum,string accName,double initialBalance)
			{
				accountNumber = accNum;
				name = accName;
				balance = initialBalance;
			}
		
void deposit(double amount)
{
	if(amount > 0)
	{
		balance += amount;
		cout<<"Deposited: "<<amount<<endl;
	}
	else
	{
		cout<<"Invalid deposit amount"<<endl;
	}
}

void withdraw(double amount)
{
	if(amount > 0 && amount <= balance)
	{
		balance -= amount;
		cout<<"Withdraw: "<<amount<<endl;
	}
	else if(amount > balance)
	{
		cout<<"Insufficient balance"<<endl;
	}
	else
	{
		cout<<"Invalid withdraw amount"<<endl;
	}
}

void displayBalance()
{
	cout<<"\n--Account Details--"<<endl;
	cout<<"Account Number: "<<accountNumber<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"Balance: "<<balance<<endl;
}
};
int main()
{
  BankAccount account1(1001,"DSP",5000.0);
  BankAccount account2(1002,"Kailash",200.0);
  account1.displayBalance();
  account1.deposit(1500);
  account1.withdraw(2000);
  account1.withdraw(6000);
  account1.displayBalance();
  account2.displayBalance();
  account2.deposit(1500);
  account2.withdraw(2000);
  account2.withdraw(6000);
  account2.displayBalance();
}
