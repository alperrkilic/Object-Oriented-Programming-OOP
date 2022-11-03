#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
class Account{
	
	private:
		double balance;
	public:
		//These setter and getter methods are necessary to access
		//the balance since balance is private and cannot be
		//reached outside of the class
		void set_balance(double bal){
			balance=bal;
		}
		void get_balance()
		{
			return balance;
		}
	
	
};
*/

class Account{
	private:
		double balance;
	public:
		void set_balance(double bal);
		double get_balance();
};

//Since balance cannot be changed from outside of the class
//in the public section of a class we are creating a method
//that sets balance to the bal variable that is taken from the user
//and since this method is in the class when inside the main for example
// set_balance(2500.0); is activated this will go to that method
//and  set balance to the 2500.0 which is our bal variable.
//This is called 'SETTER' and an important thing
void Account::set_balance(double bal)
{
	balance=bal;
}

double Account::get_balance()
{
	return balance;
}


int main(void)
{
	
	return 0;
}
/*
	Implementing member methods
	-Very similar to how we implemented functions
	
	-Member methods have access to member attributes
	*so you don't need to pass them as arguments
	
	-Can be implemented inside the class declaration
	
	-Can be implemented outside the class declaration
	*Need to use: Class_name::method_name(){}
	
	//The one that we will use in our game project
	-Can seperate specification from implementation
	*.h file for class declaration
	*.cpp file for the class implementation
*/
/*
	INCLUDE GUARDS:
	Account.h
	#ifndef _ACCOUNT_H_
	#define _ACCOUNT_H_
	
	class Account{
	
	private:
		double balance;
	public:
		void set_balance(double bal);
		double get_balance();
	};
	
	#endif
*/

/*	
	ALTERNATIVELY:
	Account.h
	#pragma once
	class Account{
	
	private:
		double balance;
	public:
		void set_balance(double bal);
		double get_balance();
	};
	
	
*/
/*
	Account.cpp
	#include "Account.h"
	
	void Account::set_balance(double bal){
		balance=bal;
	}
	
	double Account::get_balance(){
		return balance;
	}
	
*/
/*
	in the main function;
	#include <iostream>
	#include "Account.h"
	
	int main(void)
	{
		Account frank_account;
		frank_account.set_balance(1000.00);
		double bal= frank_account.get_balance();
		std::cout<<bal<<std::endl; //1000
		return 0;
	}
	
*/