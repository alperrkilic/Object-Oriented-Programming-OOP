#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Move{
	
	private:
		int *data;
	public:
		void set_data_value(int d){*data=d;}
		int get_data_value(){return *data;}
		
		//Constructor
		Move(int d);
		
		//Copy Constructor
		Move(const Move &source);
		
		//Move Constructor
		Move(Move &&source) noexcept;
		
		//Destructor
		~Move();
};

Move::Move(int d){
	
	data = new int;
	*data = d;
	cout<<"Constructor for: "<<d<<endl;
}


//Copy constructor
Move::Move(const Move &source)
	: Move{*source.data}{
		cout<<"Copy Constructor - deep copy for "<<*data<<endl;
	}
	
//Move Constructor

	Move::Move(Move &&source)noexcept
		:data{source.data}{
		source.data=nullptr;
		cout<<"Move constructor - moving resource: "<<*data<<endl;		}


Move::~Move(){
	
	if(data!=nullptr)
	{
		cout<<"Destructor freeing data for: "<<*data<<endl;
	}
	else
	{
		cout<<"Destructor freeing data for nullptr"<<endl;
	}
	
	delete data;
}

int main(void){
	
	vector<Move> vec;
	
	vec.push_back(Move{10});
	
}

/*
	int x{100};
	inx &l_ref=x; // l-value -reference
	l_ref=10; // changes x to 10
	
	int &&r_ref=200; //r-value ref
	r_ref=300; //change r_ref to 300
	
	int &&x_ref=x; // Compiler error
*/
/*
	int x{100}; // x is an l-value
	
	void func(int &num); //A
	
	func(x); // calls A - x is an l-value
	func(200); // Error - 200 is an r-value
*/
/*
	With the same idea:
	
	int x{100}; // x is an l-value
	void func(int &&num) //B
	
	func(200); // Calls B - 200 is an r-value
	func(x); // ERROR -x is an l-value
	
	Error:cannot bind R-value reference of type int&& to lvalue of type int
*/
/*
	Overloaded version:
	
	int x{100}; //x is an l-value
	void func(int &num); // A
	void func(int &&num); //B
	
	func(x); // Calls A -  x is an l-value
	func(200); // Calls B - 200 is an r-value
*/