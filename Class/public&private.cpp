#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
	
	private:
		//attributes
		string name{"Player"};
		int health;
		int xp;
	public:
		//methods
		void talk(string text_to_say) {cout<<name<<" says "<<text_to_say<<endl;}
		bool is_dead();
};




int main()
{
	Player frank;
	
	//the statement below will cause to a compiler error
	//since private members cannot be reached outside of the class
	//frank.name="Frank";
	
	frank.talk("Hello there");
	
	return 0;
}