#include <iostream>

int main(void){
	
	int number;	
	
	/*std::cout << "Hello World" << std::endl; printing statements */	 
	std::cout << "Enter your favorite number between 1 and 100: "; //console output
	std::cin >> number; // console input
	
	if(number==5)
	{
		std::cout << number <<" is my fav number too" << std::endl;	
	}	
	else
	{
		std::cout << number <<" is not my fav number"<< std::endl;	
	}	

	/* When we want to display the console input it's the same 
	with the C. However, the variable should be written in the place
	within two '<' signs at the end and at the beginning.
	 */


	
}