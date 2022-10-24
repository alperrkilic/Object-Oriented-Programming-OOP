#include <iostream>

using namespace std; 

/*instead of writing std::cout 
and std::in every time writing statement using namespace std
transforms our syntax into a more readable version.
*/

int main(void){
	
	int number;
	
	cout<< "Enter your fav number between 1 and 100: ";
	
	cin >> number;
	
	
	if(number==5)
	{
		cout << number << " is my fav num too." <<endl;
	}
	else
	{
		cout << number << " is not my fav num." <<endl; 
	}
	
	
	
	
	
}