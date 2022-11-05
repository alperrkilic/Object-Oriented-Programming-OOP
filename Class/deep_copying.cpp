#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Deep{
	
	private:
		int *data;
	public:
		void set_data_value(int d){ *data=d;}
		int get_data_value(){return *data;}
		
		//Constructor
		Deep(int d);
		//Copy constructor
		Deep(const Deep &source);
		//Destructor
		~Deep();
};

Deep::Deep(int d){
	
	data = new int;
	*data = d;
	
}

Deep::Deep(const Deep &source)
	:Deep{*source.data}{
		//The only difference is we're not just copying the pointer
		//we're copying the data pointed to by the pointer
		cout<<"Copy constructor - deep copy"<<endl;
	}
	
//The point here is now the copy does not point to the same area with the original one
//it points elsewhere That has the same value with the original variable but is in the another address
//As a result, when it's released from the memory, it won't cause any damage to it.
	
Deep::~Deep(){
	delete data;
	cout<<"Destructor freeing data"<<endl;
}

void display_deep(Deep s){
	cout<<s.get_data_value()<<endl;
}

int main(void){
	
	Deep obj1{100};
	display_deep(obj1);
	
//	Deep obj2{obj1};
	
	
}
/*
	User-Provided copy constructor:
	-Create a copy of the pointed-to data
	-Each copy will have a pointer to unique storage in the heap
	-Deep copy when you have a raw pointer as a class data member
*/