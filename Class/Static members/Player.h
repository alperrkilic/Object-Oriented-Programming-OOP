#pragma once
#include <iostream>
#include <string>

class Player{
	
	private:
		static int num_players;
		std::string name;
		int health;
		int xp;
	public:
		//methods
		std::string get_name(){return name;}
		int get_health(){return health;}
		int get_xp(){return xp;}
		static int get_num_players();
		
		//Default constructor
		Player(std::string name_val="None",int health_val=0,int xp_val=0);
		//Copy Constructor
		Player(const Player &source);
		//Destructor
		~Player();
		
	
};