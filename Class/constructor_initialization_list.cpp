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
		Player();
		Player(std::string name_val);
		Player(std::string name_val,int health_val,int xp_val);
	
};

/*
//this below is an assignment not initialization
Player::Player(){
	
	name="None";
	health=0;
	xp=0;
}
*/

//We'd like to initialize our constructors first, therefore
//initialization syntax is very important
//we woudln't like to create and assign instead we'd like to 
//initialize it immediately which is more efficient


//this is an initialization
Player::Player():name{"None"},health{0},xp{0}{
}

Player::Player(std::string name_val)
	:name{name_val},health{0},xp{0}{
	}

Player::Player(std::string name_val,int health_val,int xp_val)
	:name{name_val},health{health_val},xp{xp_val}{
	}


int main(void){
	
	
	
	return 0;
	
}