#include <iostream>
#include <vector>

using namespace std;

int main(void){
	
	vector <string> stooges {"Larry","Moe","Curly"};
	
	
	cout<<"Without reference: "<<endl;
	
	for(auto str: stooges)
	{
		str="Funny"; //changes the copy
	}
	
	for(auto str: stooges)
	{
		cout<<str<<" ";
	}
	
	cout<<"\n----------------------\nWith reference: "<<endl;
	
	for(auto &str: stooges)
	{
		str="Funny"; //changes the original
	}
	
	for(auto str: stooges)
	{
		cout<<str<<" ";
	}
	
	cout<<"\n------------------------------"<<endl;
	
	/*
		for(auto const &str: stooges)
		{
			str="Funny"; //compiler error		
		}
	*/
	
	
	
}