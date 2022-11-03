#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void){
	
	
	
	
	
	
}

/*
	CONSTRUCTORS
	*Special member method
	*Invoked during object creation
	*useful for initialization
	*same name as the class
	*No return type is specified
	*Can be overloaded
*/

/*
	CONSTRUCTOR EXAMPLE1
	class Player{
	private:
		std::string name;
		int health;
		int xp;
	public:
		//overloaded constructors
		Player();
		Player(std::string name);
		Player(std::string name, int health, int xp);	
	};
*/

/*
	CONSTRUCTOR EXAMPLE2
	class Account{
	private:
		std::string name;
		double balance;
	public:
		//constructors
		Account();
		Account(std::string name,double balance);
		Account(std::string name);
		Account(double balance);
	};
*/

/*
	DESTRUCTORS:
	*special member method
	*same name as the class proceeded with a tilde(~)
	*Invoked automatically when an object is destroyed
	*No return type and no parameters
	*Only 1 destructor is allowed per class - cannot be overloaded!
	*Useful to release memory and other sources.
*/

/*
	class Player{
	private:
		std::string name;
		int health;
		int xp;
	public:
		Player();
		Player(std::string name);
		Player(std::string name, int health, int xp);
		//Destructor
		~Player();
	};
	
	~Player();
	This destructor will be called automatically when a local
	object goes out of scope, or when we delete a pointer to
	an object
	
	Creating objects:
	These objects have been created by the constructors
	{
		Player slayer;
		Player frank {"Frank",100,4};
		Player hero {"Hero};
		Player villain {"Villain"};
		//use the objects
	}	//4 destructors are called
	
	Player *enemy = new Player("Enemy",1000,0);
	delete enemy;
	
*/

/*
	class Account{
	private:
		std::string name;
		double balance;
	public:
		Account();
		Account(std::string name, double balance);
		Account(std::string name);
		Account(double balance);
		//Destructor
		~Account();
	};
*/