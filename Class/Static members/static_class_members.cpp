#include <iostream>
#include <string>
#include <vector>
#include "Player.h"

using namespace std;

void display_active_player(){
	cout<<"Active players: "<<Player::get_num_players()<<endl;
}


int main(void){
	
	display_active_player();
	Player hero{"Hero"};
	display_active_player();
	
	{
		Player frank{"Frank"};
		display_active_player();
	}
	
	display_active_player();
	
	
}
/*
	Class data members can be declared as static
	-A single data member that belongs to the class not the objects
	-Useful to store class-wide information
	
	Class functions can be declared as static
	-Independent of any objects
	-Can be called using the class name
*/