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
		std::string get_name()const{
			return name;
		}
		void set_name(std::string name_val)
		{
			name=name_val;
		}
		
		//OVERLOADED CONSTRUCTORS
		
		Player();
		Player(std::string name_val);
		Player(std::string name_val,int health_val,int xp_val);
	
	
};

Player::Player()
	: Player{"None",0,0}{
	}

Player::Player(std::string name_val)
	:Player{name_val,0,0}{
	}

Player::Player(std::string name_val,int health_val,int xp_val)
	:name{name_val},health{health_val},xp{xp_val}{
	}
	
void display_player_name(const Player &p){
	cout<<p.get_name()<<endl;
}

int main(void){
	
	const Player villain{"Villain",100,55};
	Player hero{"Hero",100,15};
	
	
	display_player_name(villain);
	
	return 0;
}
/*
	const Player villain{"Villain",100,55};
	
	void display_player_name(const Player &p){
		cout<<p.get_name()<<endl;
	}
	
	display_player_name(villain); //ERROR
	
	//Compiler thinks that this method could change the object
	therefore it doesn't allow us to call it.
	
	What is the solution?
	
	Class Player{
		private:
			...
		public:
			std::string get_name() const;
			//ERROR if code in get_name modifies this object
			...
	};
	
	After putting const before semi-colon of the method,
	it allows us to call it.
	
	const Player villain{"Villain",100,55};
	
	villain.set_name("Nice guy"); //ERROR const cannot be changed
	
	std::cout<<villain.get_name()<<std::endl; //OK
	
*/