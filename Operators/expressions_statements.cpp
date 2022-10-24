#include <iostream>

using namespace std;

int main(void)
{
	
	int a,b;
	
	cout <<"Input a and b: ";
	cin >> a >> b;
	
	
	//use of if statement
	if(a>b) cout<<"a is greater than b";
	if(a<b) cout<<"b is greater than a";
	
	
	//assignment operator
	/*
		const int num1{10};
		int num2{20};
		
		num1=100;
		will give error since num1 is a const int 
		therefore it cannot be changed once declared.
	*/
}