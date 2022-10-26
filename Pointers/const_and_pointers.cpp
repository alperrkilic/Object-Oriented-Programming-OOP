#include <iostream>

using namespace std;

int main(void){
	
	//There are several ways to qualify pointers
	//using const
	//Pointers to constants
	//Constant Pointers
	//Constant pointers to constants
	
	
	//1-Pointers to constants
	
	int high_score{100};
	int low_score{65};
	
	const int *score_ptr{&high_score};
	
	// *score_ptr=86; --> error
	
	score_ptr = &low_score; //ok
	
	
	//2-Constant pointers
	
	//The data pointed to by the pointers can be changed
	//The pointer itself cannot change and point somewhere else
	
	/*
		int high_score{100};
		int low_score{65};
		int *const score_ptr {&high_score};
		*score_ptr=86; --> ok
		score_ptr = &low_score; --> error
	*/
	
	
	//3-Constant pointers to Constants
	
	//The data pointed to by the pointer is constant and cannot be changed
	//The pointer itself cannot change and point somewhere else.
	
	
	/*
		int high_score{100};
		int low_score{65};
		const int *const score_ptr{&high_score};
		*score_ptr=86; //error
		score_ptr=&low_score //error
	*/
	
}