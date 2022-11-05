#include <iostream>

using namespace std;

class Base{
	
	private:
		int value;
	public:
		Base() : value(0) {cout<<"Base no-args constructor"<<endl;}
		Base(int x) : value{x} {cout<<"Base (int) overloaded constructor"<<endl;}
		~Base(){cout<<"Base destructor"<<endl;}
};

class Derived : public Base{
		using Base::Base;
	private:
		int doubled_value;
	public:
		Derived():doubled_value{0}{cout<<"Derived no-args constructor"<<endl;}
		Derived(int x):doubled_value{x*2}{cout<<"Derived destructor"<<endl;}		
		~Derived(){cout<<"Derived destructor"<<endl;}
};



int main(void){
	
	//Base b;
	//Base b{100};
	//Derived d;
	Derived d{1000};
	
	return 0;
}
/*
	-Classs destructors are invoked  in the reverse order as constructors
	-The derived par of the derived class must be destroyed before the Base class destructor is invoked
	-When a derived object is destroyed
		*Derived class destructor executes then
		*Base class destructor executes
		*Each destructor should free resources allocated in it's own constructors

*/
/*
	How it works?
	
	Base base; 			//Base constructor
						//Base destructor
	
	
	Derived Derived; 	//Base constructor
						//Derived Constructor
						//Derived destructor
						//Base destructor
*/
/*
	A derived class does NOT inherit
		*Base class constructors
		*Base class destructor
		*Base class overloaded assignment operators
		*Base class friend functions
	
	However,the derived class constructors,destructors and overloaded assignment operators
	can invoke the base-class versions
	
	First the parent is invoked and after that the derived class is invoked.
	And when the destructors are working first derived is destroyed and then parent
	is destroyed (in the reverse order)
	
*/