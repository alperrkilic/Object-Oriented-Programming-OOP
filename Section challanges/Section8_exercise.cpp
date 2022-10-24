#include <iostream>

using namespace std;

int main(void){
	
	const int dollar_value{100};
	const int quarter_value{25};
	const int dime_value{10};
	const int nickel_value{5};
	
	int change_amount{};
	
	cout<<"Enter an amount in cents: ";
	cin>>change_amount;
	
	int left{},dollars{},quarters{},dimes{},nickels{},pennies{};
	
	dollars=change_amount/dollar_value;
	left=change_amount-(dollars*dollar_value);	
	
	quarters=left/quarter_value;
	left=left-(quarters*quarter_value);
	
	dimes=left/dime_value;
	left=left-(dimes*dime_value);
	
	nickels=left/nickel_value;
	left=left-(nickels*nickel_value);
	
	pennies=left;
	
	cout<<"\nYou can provide this change as follows: "<<endl;
	cout<<"dollars : "<<dollars<<endl;
	cout<<"quarters : "<<quarters<<endl;
	cout<<"dimes : "<<dimes<<endl;
	cout<<"nickels : "<<nickels<<endl;
	cout<<"pennies : "<<pennies<<endl;
	
}