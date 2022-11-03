#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
class Player{

	public:



	//attributes
	public:
		std::string name;
		int health;
		int xp;
		
	//methods
	void talk(std::string text_to_say);
	bool is_dead();
};

Examples:
//
Player Frank;
player hero;
Player *enemy = new Player();
delete enemy;
//
class Account{

	//attributes
	
	std::string name;
	double balance;
	
	//methods
	
	bool withdraw(double amount);
	bool deposit (double amount);


};


Account frank_account;
Account jim_account;

Account accounts[] {frank_account,jim_account};
std::vector<Account> accounts1 {frank_Account};
accounts1.push_back(jim_accounts);


*/

	/*
		What is OOP
		
		classes and objects
		-focus is oon classes that model real-world domain entities
		-allows developers to think at a higher level of abstraction
		-used successfully in very large problems
		
		Encapsulation
		-objects contain data AND operations that work on that data
		-Abstract Data Type (ADT)
		
		Information-hiding
		-implementation-specific logic can be hidden
		-users of the class code to the interface since they don't need
		to know the implementation
		-more abstraction
		-easier to test, debug, maintain and extend
		
		Reuasable
		
		Inheritance
		-can create new classes in term of existing classes
		-reuasability
		-polymorphic classes
	*/
	
	/*
		Classes
		-blueprint from which objects are created
		-a used-defined data type
		-has attributes (data)
		-has methods(functions)
		-can hide data and methods
		-provides a public interface
		
		Example Classes:
		-Account
		-Employee
		-Image
		-std::vector
		-std::string
		
		Objects:
		-created from a class
		-represents a specific instance of a class
		-can create many,many objects
		-each has its own identity
		-each can use the defined class methods
		
		Example Account objects:
		-Frank's account is an instance of an account
		-Jim's account is an instance of an account
		-Each has its own balance can make deposits and withdrawals etc.	
	*/	


class Player{
	
	//attributes
	string name{"Player"};
	int health{100};
	int xp{3};
	
	//methods
	void talk(string);
	bool is_dead();
	
	
	
};

class Account{

	//attributes
	string name{"Account"};
	double balance{0.0};
	
	//methods
	bool deposit(double);
	bool withdraw(double);

	
};


int main(void){
	
	Account frank_account;
	Account jim_account;
	
	
	Player frank;
	Player hero;

	Player players[]{frank,hero};
	
	vector<Player>player_vector {frank};
	
	player_vector.push_back(hero);


	Player *enemy{nullptr};
	enemy=	new Player;
	//Enemy is now created on the heap


	delete enemy;

	return 0;
}