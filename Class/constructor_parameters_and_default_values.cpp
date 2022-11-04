#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player{
	
	private:
		std::string name;
		int health;
		int xp;
	public:
		//Constructor with default parameter values:
		Player(std::string name_val="None",int health_val=0,int xp_val=0);	
};

Player::Player(std::string name_val,int health_val,int xp_val)
	: name{name_val},health{health_val},xp{xp_val}{
	
	}
	
//Since this single constructor is doing the job of several constructors
//we have to be careful not to declare ambiguous constructors.
//For example if we would declare a no-args constructor we'd 
//get a compiler error because the compiler wouldn't know which one
//to call.

int main(void){
	
	Player empty;// None,0,0
	Player frank {"Frank"};// Frank,0,0
	Player villain {"Villain",100,55};// Villain,100,55
	Player hero{"Hero",100};//Hero,100,0 -> two-args-constructor


	
	
}