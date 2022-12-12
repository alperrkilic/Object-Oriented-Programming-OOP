#include <iostream>
#include <string>

using namespace std;

class Base{
	
	private:
		//attributes
		int value;
	
	public:
		Base() : value{0}
		{
			cout<<"Base no-args constructor"<<endl;
		}
		Base(int x) : value{x}{
			cout<<"Base (int) overloaded constructor"<<endl;
		}
		~Base(){
			cout<<"Base destructor"<<endl;
		}
};

class Derived : public Base{
	
	private:
		int doubled_value;
	
	public:
		Derived() : Base{},doubled_value{0}
		{
			cout<<"Derived no-args constructor"<<endl;	
		}
		Derived(int x) : Base{x},doubled_value{x*2}
		{
			cout<<"Derived (int) constructor"<<endl;
		}
		~Derived()
		{
			cout<<"Derived destructor"<<endl;	
		}
};


int main(void){
	
	Derived d;
	
	Derived x{1000};
	
	return 0;
}


/*
	
	*The Base part of a derived class must be initialized first
	
	*How can we control exactly which Base class constructor is used
	during initialization
	
	*We can invoke the whichever Base class constructor we wish in the
	initialization list of the derived class.
	
*/

/*
	Here is the logic:
	
	Base base; -> Output--> Base no-args constructor
	
	Base base{100}; -> int Base constructor
	
	Derived derived; -> Base no-args constructor and then, Derived no-args constructor
	
	Derived derived{100}; --> int Base constructor and then, int Derived constructor
*/