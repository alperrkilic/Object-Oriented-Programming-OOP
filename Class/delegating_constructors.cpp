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
Player::Player()
	: name{"None"},health{0},xp{0}{
	}
	
Player::Player(std::string name_val)
	:name{name_val},health{0},xp{0}{
	}

Player::Player(std::string name_val,int health_val,int xp_val)
	:name{name_val},health{health_val},xp{xp_val}{
	}
*/

Player::Player(std::string name_val,int health_val,int xp_val)
	:name{name_val},health{health_val},xp{xp_val}{
		cout<<"3-args-constructor"<<endl;
	}
	
Player::Player()
	: Player{"None",0,0}{
		//Delegating constructor delegates from the 3 args constructor
		cout<<"No-arg-constructor"<<endl;
	} 

Player::Player(std::string name_val)
	: Player{name_val,0,0}{
		cout<<"1-args-constructor"<<endl;
	}

//Firstly it will see empty object of the player class
//since it does not know the parameters it goes to the 3 args
//constructor to delegate it and then comes back to the no args 
//constructor.
//For the second one we have 1-arg-constructor and it does not 
//know what to initialize these values and it goes to the 3
//args constructor to understand "Ok what are the variables that I'm
//setting and after that it goes back to the 1-arg constructor again
//and initialize values
//for the last part since there are 3 arguments it can be already
//created with 3 args constructor so the 3-args constructor initialize
//values and program ends.


int main(void){
	
	Player empty;
	Player frank{"Frank"};
	Player villain{"Villain",100,55};
	
	return 0;	
}
/*
	Delegating Constructors:
	
	-Often the code for constructors is very similar
	
	-Duplicated code can lead to errors
	
	-C++ allows delegating constructors
	*	Code for one constructor can call another in the initialization list
	*	Avoids duplicating code
*/