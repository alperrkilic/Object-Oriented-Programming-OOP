#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(void){
	
	int num{100};
	int &ref{num};
	
	cout<<num<<endl;
	cout<<ref<<endl;
	
	num=200;	
	cout<<"\n-------------------------"<<endl;
	
	cout<<num<<endl;
	cout<<ref<<endl;
	
	ref=300;
	cout<<"\n-------------------------"<<endl;
	
	cout<<num<<endl;
	cout<<ref<<endl;
	
	cout<<"\n-------------------------"<<endl;
	
	vector <string> stooges{"Larry","Moe","Curly"};
	
	for(auto str:stooges)
	{
		str="Funny";
	}
	
	for(auto str:stooges)
	{
		cout<<str<<endl;
	}
	
	cout<<"\n-------------------------"<<endl;
	
	for(auto &str:stooges)
	{
		str="Funny";
	}
	
	//When accessing to the address of the stooges
	//we're saving bytes however, the content can be changed
	//if we want to keep the content then we should use const
	for(auto const &str:stooges)
	{
		cout<<str<<endl;
	}
	
	cout<<endl;
	
}