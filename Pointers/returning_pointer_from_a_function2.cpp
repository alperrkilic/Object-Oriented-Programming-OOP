#include <iostream>

using namespace std;

int main(void){
	
	cout<<endl;
	
	return 0;
}
/*
	int *dont_do_this(){
		int size{};
		...
		return &size;
		//Size is a local variable to the function
		//we're returning the address of a local
		//variable in the function
		//When function is terminated this variable
		//is passed its lifetime 
		//the next time the function is called or any function
		//is called the stack area will be reused and the pointer will now
		//be pointing into that new activation record.
		//if you overwrite the data it's pointing to you could trash
		//the stack pointers static links and all kinds of important informations.
	}
	
	int *or_this(){
		int size{};
		int *int_ptr{&size};
		...
		return int_ptr;
		//same idea with the above.
	}



*/