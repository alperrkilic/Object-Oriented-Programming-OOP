#include <iostream>

using namespace std;

int main(void){
	
	int num1{},num2{};
	
	cout<<boolalpha;
	cout<<"Enter 2 integers seperated by a space: ";
	cin>> num1>> num2;
	
	
	cout<<num1<<" > "<<num2<<" : " << (num1>num2) <<endl;
	cout<<num1<<" >= "<<num2<<" : " << (num1>=num2) <<endl;
	cout<<num1<<" < "<<num2<<" : " << (num1<num2) <<endl;
	cout<<num1<<" <= "<<num2<<" : " << (num1<=num2) <<endl;
	
	
	int number1{},number2{};
	
	const int lower{10};
	const int upper{20};
	
	cout<<"\nEnter an integer that is greater than "<< lower <<" : ";
	cin>>number1;
	cout<< number1 <<" > "<<lower<<" is "<<(number1>lower)<<endl;
	
	
	
}