#include <iostream>

using namespace std;

int main(void){
	
	//subtracting two pointers	
	//determine the number of elements between the pointers
	//both pointers must point to the same data type
	
	//int n = int_ptr2 - int_ptr1;
	
	cout<<boolalpha;
	
	string s1 {"Frank"};
	string s2 {"Frank"};
	
	string *p1{&s1};
	string *p2{&s2};
	string *p3{&s1};
	
	cout<<(p1==p2)<<endl; //false (checks whether the pointers are pointing the same address or not)
	cout<<(p1==p3)<<endl; //true  
	
	cout<<"\n------------------"<<endl;
	cout<<(*p1==*p2)<<endl; //checks whether the values of the
	cout<<(*p1==*p3)<<endl; //pointers are same or not.
	



	
}