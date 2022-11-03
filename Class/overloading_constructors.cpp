#include <iostream>
#include <string>

using namespace std;

class Player{

	private:
		std::string name;
		int health;
		int xp;
	public:
		//Overloaded constructors
		Player();
		Player(std::string name_val);
		Player(std::string name_val,int health_val,int xp_val);
};

Player::Player(){
	
	name="None";
	health=0;
	xp=0;
}

Player::Player(std::string name_val){
	
	name=name_val;
	health=0;
	xp=0;
}

Player::Player(std::string name_val,int health_val,int xp_val){
	
	name=name_val;
	health=health_val;
	xp=xp_val;
}

/*
	Player empty; // None 0,0 
		Player hero {"Hero"};
		Player villain {"Villain"};
		Player frank {"Frank",100,4};
		
		Player *enemy = new Player("Enemy",1000,0); 
		delete enemy;
*/

int main(void){
	
	return 0;
}

/*
	-Classes can have as many constructors as necessary
	-Each must have a unique signature
	-Default constructor is no longer compiler-generated once
	another constructor is declared.
*/