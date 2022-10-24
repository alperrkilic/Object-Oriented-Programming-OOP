#include <iostream>
#include <string>

using namespace std;

int main(void){
	
	//CPP string --> getting input accurately
	
	string s1;
	getline(cin,s1);
	cout<<s1<<endl;
	
	/*
		If I was using cin instead of getline
		a string that contains space character
		wouldn't be inputted correctly
		For example: 
		Merhaba ben alper
		output:
		Merhaba
	*/
}