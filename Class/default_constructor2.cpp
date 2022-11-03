#include <iostream>
#include <string>

using namespace std;

class Player{
	
	private:
		std::string name;
		int health;
		int xp;
	public:
		
		void set_name(std::string name_val)
		{
			name=name_val;	
		}
		
		std::string get_name()
		{
			return name;
		}
		
		Player()
		{
			name="None";
			health=100;
			xp=3;
		}
		
		Player(std::string name_val,int health_val,int xp_val)
		{
			name=name_val;
			health=health_val;
			xp=xp_val;	
		}
};

int main(void){
	
	Player frank; // --> frank variable has taken the default variables.
	Player jim{"Frank",100,13}; // --> three args constructor 
	
	//Default constructor
	cout<<"Default constructor: ";
	cout<<frank.get_name()<<endl;
	
	cout<<"After name have been set to Frank: ";
	frank.set_name("Frank");
	cout<<frank.get_name()<<endl;	
	
	return 0;
}