#include <iostream>

using namespace std;

int main(void){
	
	
	cout<<endl;
	return 0;		
}
/*
	Inheritance:
	-Provides a method for creating new classes from existing classes
	
	-The new class contains the data and behaviors of the existing class
	
	-Allow for reuse of existing classes.
	
	-Allows us to focus on the common attributes among a set of classes
	
	-Allows new classes to modify behaviors of existing classes to make it unique
	*Without actually modifying the original class
	
	Related Classes:
	Player,enemy,level boss,hero,super player,etc.
	
	Accounts:
	
	Account:
		*balance
		*withdraw
		*deposit
	Savings account:
		*balance
		*deposit
		*withdraw
		*interest rate
	Checking Account:
		*balance
		*withdraw
		*deposit
		*minimum balance
		*per check fee
	Trust Account
		*balance
		*deposit
		*withdraw
		*interest rate
*/
/*
	class Account{
		//balance,deposit,withdraw...
	};
	
	class Savings_Account : public Account{
		//interest rate,specialized withdraw...
	};
	
*/