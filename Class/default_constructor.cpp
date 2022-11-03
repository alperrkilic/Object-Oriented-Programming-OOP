#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void){
	
	
	return 0;
}

/*
	The default Constructor
	
	-Does not expect any arguments
	*Also called the no-args constructor
	
	-If your write no constructors at all for a class
	*C++ will generate a default constructor that does nothing
	
	-Called when you instantiate a new object with no arguments
	
	Player frank;
	Player *enemy = new Player;
*/
/*
	class Account{
	private:
		std::string name;
		double balance;
	public:
		bool withdraw(double amount);
		bool deposit(double amount);
	};
*/
/*
	Creating objects:
	Account frank_account;
	Account jim_account;
	
	Account *mary_account = new Account;
	delete mary_account; 
*/
/*
	Declaring a Class:
	Account - user-defined no args constructor
	DEFAULT-CONSTRUCTOR
	class Account{
		private:
			std::string name;
			double balance;
		public:
			Account()
			{
				name="None";
				balance = 0.0;
			}
			bool withdraw(double amount);
			bool deposit(double amount);
	};
*/
/*
	class Account{
		private:
			std::string name;
			double balance;
		public:
			Account(std::string name_val,double bal)
			{
				name=name_val;
				balance=bal;
			}
			bool withdraw(double amount);
			bool deposit(double amount);
	};
*/
