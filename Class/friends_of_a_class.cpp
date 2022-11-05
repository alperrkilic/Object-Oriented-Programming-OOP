
/*
	Friends of a class:
	Friend: A function or class that has access to private class members
	and that function of or class is NOT a member of the class it is accessing.
	
	Function:
	Can be regular non-member functions
	Can be member methods of another class
	
	Class:
	Another class can have access to private class members
	
	
	Friendship must be granted Not taken
	Declared explicitly in the class that is granting friendship
	Declared in the function prototype with the keyword friend
	
	Friendship is not symmetric
	Must be explicityly granted:
		If A is friend of B
		B is NOT a friend of A
	
	Friendship is not transitive
	Must be explicitly granted:
		If A is friend of B 
		and B is a friend of C
		then A is NOT a friend of C
	
*/

class Player{
	
	friend void display_player(Player &p);
	std::string name;
	int health;
	int xp;	
};

class Player{
	
	friend void Other_class::display_player(Player &p);
	//now the other_class's display_player method has access to every member of the player class
	std::string name;
	int health;
	int xp;	
};

class Player{
	
	friend class Other_class;
	//very powerful friendship every method of the other_class now has access to every member of this Player class
	std::string name;
	int health;
	int xp;	
};
