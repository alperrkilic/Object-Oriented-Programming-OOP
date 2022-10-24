#include <iostream>
#include <vector>

using namespace std;

int main(void){
	
	/*
		Declaring Pointers:
		int *int ptr;
		double * double_ptr{nullptr};
		char *char_ptr{nullptr};
		string *string_ptr{nullptr};
		
		Why is it important to initialize pointers:
		
		Uninitialized pointers contain garbage data and can
		point anywhere 
		
		initializing to zero or nullptr (C++11) represents zero
		(pointer points nowhere)
		
		if you don't initialize pointer to point a variable
		or function then you should initialize it to nullptr
		to make it null.
	*/
	
	int num{10};
	
	cout<<"Value of num is: "<<num<<endl;
	cout<<"sizeof of num is: "<<sizeof num<<endl;
	cout<<"Address of num is: "<<&num<<endl;
	
	
	int *p;
	
	cout<<"Value of p is: "<<p<<endl; // garbage since p is not initialized to zero
	cout<<"Address of p is: "<<&p<<endl;
	cout<<"sizeof of p is : "<<sizeof p <<endl;
	//addresses on my machine can be stored in four bytes.
	
	p=nullptr;	
	
	cout<<"Value of p is: "<<p<<endl;
	
	//Don't confuse the size of a pointer and the size of
	//what it points to
	//All pointers in a program have the same size
	//They may be pointing to very large or very small types
	
	int *p1{nullptr};
	double *p2{nullptr};
	unsigned long long *p3{nullptr};
	vector<string> *p4 {nullptr};
	string *p5{nullptr};
	
	cout <<"sizeof p1 is: "<<sizeof p1<<endl;
	cout <<"sizeof p2 is: "<<sizeof p2<<endl;
	cout <<"sizeof p3 is: "<<sizeof p3<<endl;
	cout <<"sizeof p4 is: "<<sizeof p4<<endl;
	cout <<"sizeof p5 is: "<<sizeof p5<<endl;
	
	//for my computer the size of the pointer is 8 bytes
	
	/*
		int score{10};
		double high_temp{100.7};
		
		int *score_ptr{nullptr};
		score_ptr = &score;
		
		score_ptr = &high_temp; //compiler error
	*/
	
	/*
		double high_temp{100.7};
		double low_temp {37.2};
		
		double *temp_ptr;
		
		temp_ptr=&high_temp;	// points to high_temp
		temp_ptr=&low_temp;		// points to low_temp
		
		temp_ptr=nullptr;
	
	*/
}