#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
	
	string s0;
	string s1{"Apple"};
	string s2{"Banana"};
	string s3{"Kiwi"};
	string s4{"apple"};
	string s5{s1};
	string s6{s1,0,3};
	string s7{3,'X'};
	
	/*
	cout<<s0<<endl;
	cout<<s0.length()<<endl;
	
	
	//Initialization
	cout<<"\nInitialization"<<"\n--------------------"<<endl;
	cout<<"s1 is initialized to "<<s1<<endl;
	cout<<"s2 is initialized to "<<s2<<endl;
	cout<<"s3 is initialized to "<<s3<<endl;
	cout<<"s4 is initialized to "<<s4<<endl;
	cout<<"s5 is initialized to "<<s5<<endl;
	cout<<"s6 is initialized to "<<s6<<endl;
	cout<<"s7 is initialized to "<<s7<<endl;
	*/
	
	//Comparison
	/*
	cout<<"\nComparison"<<"\n------------------------"<<endl;
	cout<<boolalpha;
	
	cout<<s1<< " == "<<s5<<" : "<<(s1==s5)<<endl;
	cout<<s1<< " == "<<s2<<" : "<<(s1==s2)<<endl;
	cout<<s1<< " != "<<s2<<" : "<<(s1!=s2)<<endl;
	cout<<s1<< " < "<<s2<<" : "<<(s1<s2)<<endl;
	cout<<s2<< " > "<<s1<<" : "<<(s2>s1)<<endl;
	cout<<s4<< " < "<<s5<<" : "<<(s4<s5)<<endl;
	cout<<s1<< " == "<<"Apple"<<" : "<<(s1=="Apple")<<endl;	
	*/
	
	/*
	cout<<"\nErase"<<endl;
	s1="This is a test";
	cout<<"Before erasing s1 is: "<<s1<<endl;
	s1.erase(0,5);
	cout<<"s1 is now: "<<s1<<endl;
	*/
	
	cout<<"\nFind"<<"\n-------------------------"<<endl;
	
	s1="The secret word is Boo";
	string word{};
	
	cout<<"Enter the word to find: ";
	cin>>word;
	
	size_t position = s1.find(word);
	
	if(position!=string::npos)
	{
		cout<<"Found "<<word<<" at position "<<position<<endl;
	}
	else
	{
		cout<<"Sorry, "<<word<<" not found"<<endl;
	}
	
	cout<<endl;
	
	
	
	
}