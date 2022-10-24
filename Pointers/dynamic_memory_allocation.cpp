#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void){
	
	int *int_ptr{nullptr};
	
	int_ptr = new int; //allocate an integer on the heap
	 
	cout<<int_ptr<<endl; //0x2747f28
	
	cout<<*int_ptr<<endl; //41188048 - garbage
	
	*int_ptr = 100;
	
	cout<<*int_ptr<<endl; //100
	delete int_ptr;
	
	
	int *array_ptr {nullptr};
	int size{};
	
	cout<<"How big do you want the array? ";
	cin>>size;
	
	array_ptr = new int[size]; //allocate array on the heap
	
	delete [] array_ptr; //free allocated storage
	
	/*
		Heap
		free storage
		stack
		global code
	*/
}