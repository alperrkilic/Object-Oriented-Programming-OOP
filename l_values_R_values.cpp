#include <iostream>
#include <string>

using namespace std;

//Warning:
//This program is not written to run
int main(void){
	
	//l-values 
	//that have ames and are addressable
	
	int x{100}; //x is an l-value
	x=1000;
	x=1000+20;
	
	string name; //name is an l-value
	name="Frank";
	
	100=x; //100 is not an l-value
	(1000+20) =x; // 1000+20 is not an l-value
	
	string name;
	name="Frank";
	"Frank"=name; // Frank is not an l-value
	
	
	//r-values (non-addressable and non-assignable)
	//a value that is not an l-value
	//on the right hand side of an assignment expression
	//a temporary which is intended to be non-modifable
	
	
	int x{100};
	int y=x+200; // (x+200) is an r-value
	
	string name;
	name="Frank";	//"Frank" is an r-value;
	
	int max_num = max(20,30); // max(20,30) is an r-value
	
	
	//l-value references
	
	//The references we've used are l-value references
	//because we are referencing l-values
	
	int &ref1 = x; //ref1 is reference to l-value
	ref1=1000;
	
	int &ref2 = 100; //Error 100 is an r-value
	
	
	//The same when we pass by reference
	
	int square(int &n){
		return n*n
	}
	
	int num{10};
	
	square(num); //ok
	
	square(5) //Error- can't reference r-value 5
	
}