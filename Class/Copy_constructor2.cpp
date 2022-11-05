#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
	
	private:
		std::string name;
		int health;
		int xp;
	public:
		
		//Getter-Setter-Encapsulation
		std::string get_name(){return name;}
		int get_health(){return health;}
		int get_xp(){return xp;}
		
		//Constructor
		Player(std::string name_val="None",int health_val=0,int xp_val=0);	
		
		//Copy constructor
		Player(const Player &source);
		
		//Destructor
		~Player(){cout<<"Destructor called for: "<<name<<endl;}
};

//default constructor with initialization values.
Player::Player(std::string name_val,int health_val,int xp_val)
	:name{name_val},health{health_val},xp{xp_val}{
		cout<<"Three-args-constructor for " + name<<endl;
	}
	
//copy constructor
Player::Player(const Player &source)
	//:name{source.name},health{source.health},xp{source.xp}{ alternatively we could implement delegation here.
	:Player{source.name,source.health,source.xp}{
		cout<<"Copy constructor - made a copy of: "<<source.name<<endl;
	}

//This function creates a copy.
void display_player(Player p){
	
	cout<<"Name: "<<p.get_name()<<endl;
	cout<<"Health: "<<p.get_health()<<endl;
	cout<<"XP: "<<p.get_xp()<<endl;
	
}


/*
	What happens here is after empty object of Player class have been created, constructor for it constructed the default values and after that
	in the next line display_player function is called. Since display_player function is called by value it needs a copy of empty object
	this is where we need the copy constructor and a copy of empty object is made in the copy constructor and after that program returns to
	the display_player function and prints the values of that copied class.
	
	For example: if I had,
	Player empty{"XXXXX",100,50};
	Player new_object{empty};
	For new_object copy constructor is called
*/
int main(void){
	
	Player empty;
	display_player(empty);
	
	Player frank{"Frank"};
	Player hero{"Hero",100};
	Player villain{"Villain",100,55};
	
	return 0;
}