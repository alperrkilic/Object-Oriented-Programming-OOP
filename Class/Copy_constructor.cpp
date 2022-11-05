#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void){
	
	
	
	
	
	return 0;
}
/*
	Declaring the Copy Constructor:
	
	General form:
	Type::Type(Const Type &source);

	Ex-1:
	Player::Player(const Player &source);
	
	Ex-2:
	Account::Account(const Account &source);

*/
/*
	Implementing the Copy Constructor:
	
	Type::Type(const Type &source){
		//code or initialization list to copy to the object	
	}
	
	Player::Player(const Player &source)
		: name{source.name},
		  health{source.health},
		  xp{source.xp}{	  
	}
	
	Accout::Account(const Account &source)
		:name{source.name},
		balance{source.balance}{
	}
	
	
*/
/*
	-When objects are copied C++ must create a new object from an existing object
	
	-When is a copy of an object made?
	*Passing objects by value as parameter
	*Returning an object from a function by value
	*Constructing one object based on another of the same class
	
	-C++ must have a way of accomplishing this so it provides a compiler-defined
	copy constructor if you don't
	
*/
/*
	Example-1:
	Player hero{"Hero",100,20};
	
	void display_player(Player p){
		//p is a copy of hero in this example
		//use p
		//Destructor for p will be called when p is out of the scope
	}
	
	display_player(hero);
	
*/
/*
	Example-2:
	Player enemy;
	
	//In this example we're returning a class.
	Player create_super_enemy(){
		Player an_enemy{"Super Enemy",1000,1000};
		return an_enemy; //A copy of an_enemy is returned
	}
	
	in the calling function or main:
	enemy=create_super_enemy();
	
	
*/
/*
	Player hero {"Hero",100,100};
	Player another_hero{hero}; //A copy of hero is made.
*/
/*
	-If you don't provide your own way of copying objects by value
	then the compiler provides a default way of copying objects
	
	-Copies the values f each data member to the new object
		*default memberwise copy
		
	-Perfectly fine in many cases
	
	-Beware if you have a pointer data member
		*Pointer will be copied
		*Not what it is pointing to
*/