#include <iostream>

using namespace std;

int main(void){
	
	/*
		arithmetic operators:
		+	addition
		-	subtraction
		*	multiplication
		%	modulo
		/	division
	*/
	
	int num1{100};
	int num2{200};
	
	int result{0};
	
	result=num1+num2;
	
	
	cout<<num1<<" + "<<num2<<" = "<<result<<endl;
	cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
	
	
	/*
		increment and decrement operators
		++num; first increase then print
		num++; first print then increase
		num--; first print then decrease
		--num; first decrease then print
	*/
	
	int i{0};
	
	cout << i++ << " " << ++i<<endl; // will display 0 and 2 on the screen.
	
	
	int numb1{},numb2{},numb3{};
	const int count{3};
	
	
	cout<<"Enter 3 integers seperated by spaces: ";
	cin>>numb1>>numb2>>numb3;
	
	int total=numb1+numb2+numb3;
	double average{0.0};
	
	average= static_cast<double> (total)/count;
	
	cout<<"The 3 numbers were "<<numb1 <<"," <<numb2<<","<<numb3<<endl;
	cout<<"The sum of the numbers is: "<<total<<endl;	
	cout<<"The average of the numbers is "<<average<<endl;


	//since total is an integer number we should convert it
	//to a double number in order to preserve the fractional part.
	//so we did static_cast<double> (total) 
	//total should be in parantheses
	//and also we could do
	// average= (double)total/count but it is old-style


}