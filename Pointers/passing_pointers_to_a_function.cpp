#include <iostream>

using namespace std;
void double_data(int *int_ptr);

int main(void){
	
	int value{10};
	int *int_ptr{nullptr}; 
	
	cout <<"value: "<<value<<endl;
	
	double_data(&value);	
	
	cout <<"after double_data value: "<<value<<endl;//20
	
	
	cout<<"--------------------------------"<<endl;
	
	int_ptr = &value; //20
	double_data(int_ptr); //20*2 = 40
	
	cout<<"Value: "<<value<<endl;
	
	/*
		stack:
			
		double_data(1000) ---> int_ptr 1000 (points to the value)
		--------------
		
		2000	int_ptr
		1000	value 10
	*/
	
}

void double_data(int *int_ptr){
	
	*int_ptr *=2;
	
	//*int_ptr = *int_ptr * 2;
	
}