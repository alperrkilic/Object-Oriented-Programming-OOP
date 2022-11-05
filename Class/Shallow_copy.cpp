#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Shallow{
	
	private:
		int *data;
	public:
		void set_data_value(int d){*data=d;}
		int get_data_value(){return *data;}	
	
		//Constructor
		Shallow(int d);
		
		//Copy Constructor
		Shallow(const Shallow &source);

		//Destructor
		~Shallow();
};

Shallow::Shallow(int d){
	data = new int;
	*data =d;
}

Shallow::Shallow(const Shallow &source)
	: data(source.data){
		cout<<"Copy constructor - shallow copy"<<endl;
	}
	
Shallow::~Shallow(){
	delete data;
	cout<<"Destructor freeing data"<<endl;
}

void display_shallow(Shallow s){
	cout<<s.get_data_value()<<endl;
}


int main(void){
	
	Shallow obj1{100};
	display_shallow(obj1);
	
	Shallow obj2{obj1};
	obj2.set_data_value(1000);
	
	return 0;
}
/*
	so for the original obj1:
		data ---> 100
					^
					|	(when we delete this copy data 100 is no longer valid meaning that it is freed from the memory) so the original points an invalid address
	copy of obj1: data 
	
	since we are passing it by value to the display_shallow function
	a copy of obj1 is created and also a data pointer is created which points 
	the exactly same address that the original obj1 points. When the function is terminated
	the destructor for obj1 will be called and data pointer will be deleted.
	so the address that original obj1 points to is no longer valid.
*/