#include <iostream>
#include <string>

using namespace std;

class Account{
	
	private:
		//attributes
		string name;
		double balance;
	
	public:
		//methods
		//declared inline
		void set_Balance(double bal) {balance=bal;}
		double get_Balance(){return balance;}
		
		//methods will be declared outside the class declaration
		void set_name(string n);
		string get_name();
		
		bool deposit(double amount);
		bool withdraw(double amount);
};

void Account::set_name(string n)
{
	name=n;
}

string Account::get_name()
{
	return name;
}

bool Account::deposit(double amount)
{
	balance+=amount;
	return true;
}

bool Account::withdraw(double amount)
{
	if(balance-amount>=0)
	{
		balance-=amount;
		return true;
	}
	else
	{
		return false;
	}
}


int main(void){
	
	Account frank_account;
	frank_account.set_name("Frank's account.");
	frank_account.set_Balance(1000.0);
	
	
	if(frank_account.deposit(200.0))
	{
		cout<<"Deposit OK"<<endl;
	}
	else
	{
		cout<<"Deposit not allowed"<<endl;
	}
	
	if(frank_account.withdraw(500.0))
	{
		cout<<"Withdraw OK"<<endl;
	}
	else
	{
		cout<<"Not sufficient funds"<<endl;
	}
	
	
	if(frank_account.withdraw(1500.0))
	{
		cout<<"Withdraw OK"<<endl;
	}
	else
	{
		cout<<"Not sufficient funds"<<endl;
	}
	

	
	
	
	
}