#include <iostream>

using namespace std;

int main(void){
		
	/*
		1000		100
		1004		95
		1008		89
		1012		68
		1016		-1
	*/
	
	//If array is created normally,
	//then array is found in the stack
	//if array is created by
	//int *array_ptr{nullptr};
	//array_ptr = new int [size];
	//this is memory allocation --> then it is created in the heap
	
	
	int scores[] {100,95,89,68,-1};
	int *score_ptr{scores};
	
	while(*score_ptr != -1)
	{
		cout<<*score_ptr <<endl;
		score_ptr++;
	}
	
	cout<<"\n----------------------"<<endl;
	
	score_ptr=scores;
	
	while(*score_ptr != -1)
	{
		cout<<*score_ptr++<<endl;
	}
	
	cout<<"\n----------------------"<<endl;
	
	string s1 {"Frank"};
	string s2 {"Frank"};
	string s3 {"James"};
	
	string *p1{&s1};
	string *p2{&s2};
	string *p3{&s3};
	
	
		
	
	
	
}