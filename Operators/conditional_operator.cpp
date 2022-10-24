#include <iostream>

using namespace std;

int main(void){
	
	int a{10},b{20};
	int score{92};
	int result{};
	
	result = (a > b) ? a:b;
	//if a is greater than b then the result value is assigned to a
	//with conditional operator. if a is not greater than b the we assign
	//result to the value of b
	
	result = (a<b) ? (b-a):(a-b);
	
	result = (b!=0) ? (a/b):0;
	
	result = (b!=0) ? (a/b):0;
	
	cout << ((score >90) ? " Excellent" : "Good ");
	
}