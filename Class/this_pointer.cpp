#include <iostream>

using namespace std;

int main(void){
	
	
	cout<<endl;
	return 0;
}
/*
	This pointer:
	
	-this is a reserved keyword
	
	-contains the address of the object -so it's a pointer to the object-
	
	-Can only be used in class scope
	
	-All member access is done via the this pointer

	-Can be used by the programmer
		*To access data member and methods
		*To determine if two objects are the same 
		*Can be dereferenced (*this) to yield the current object
*/

/*
	void Account::set_balace(double bal)
	{
		balance=bal; // this -> balance is implied.
	}
	
	Example:
	--------
	void Account::set_balance(double balance)
	{
		balance=balance; //which balance? 
	}
	
	void Account::set_balance(double balance){
		this->balance=balance; //Unambigious & exact
	}
	
*/

/*
	To determine object identity:
	
	*Sometimes its useful to know if two objects are the same objects
	
	int Account::compare_balance(const Account &other)
	{
		if(this==&other)
		{
			std::cout<<"The same objects"<<std::endl;
		}
	}
	
*/
