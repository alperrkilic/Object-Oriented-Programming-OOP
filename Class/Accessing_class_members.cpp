#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
	
	public:
		//attributes
		string name;
		int health;
		int xp;
		
		//methods
		void talk(string text_to_say){ cout<<name<<" says "<<text_to_say<<endl;}
		bool is_dead();
};

class Account{
	
	public:
		//attributes
		string name;
		double balance;	
		
		//methods
		void deposit(double bal){balance+=bal; cout<<"In deposit"<<endl;}
		void withdraw(double bal){balance-=bal;cout<<"In withdraw"<<endl;}	
};

int main(void){
	
	Account frank_account;
	
	frank_account.name = "Frank's account";
	frank_account.balance=5000.0;
	
	frank_account.deposit(1000);
	frank_account.withdraw(500);
	
	
	
	//Since it's not a pointer to an object
	//we can use . operator to reach class members
	Player frank;
	frank.name="Frank";
	frank.health=100;
	frank.xp=12;
	frank.talk("Hi there");
	
	
	//since enemy is pointer to an object from player class
	//in order to access its attributes we should use arrow
	//operator
	Player *enemy=new Player;
	enemy->name="Enemy";
	enemy->xp=15;
	enemy->health=100;
	enemy->talk("I will destroy you");
	
	
	return 0;
	
}
/*
	Using the dot operator;
	Account frank_account,
	frank_account.balance;
	frank_account.deposit(1000.00);
	
	If we have pointer to an object(member of pointer operator)
	
	1.way
	-Dereference the pointer then use the dot operator
	Account *frank_account = new Account();
	(*frank_account).balance;
	(*frank_account).deposit(1000.00);
	
	2. way
	-Or use the member of pointer operator(Arrow operator)
	Account *frank_account=new Account();
	frank_account->balance;
	frank_account->deposit(1000.00);
	
	
*/