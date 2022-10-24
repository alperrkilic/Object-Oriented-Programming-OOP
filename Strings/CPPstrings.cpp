#include <string>
#include <iostream>

using namespace std;

int main(void){
	
//	string s1;	
//	string s2 {"Frank"};
//	string s3 {s2};
//	string s4 {"Frank",3};
//	string s5 {s3,0,2};
//	string s6 {3,'X'};


/*
	
	string s1;
	s1="C++ Rocks!";
	
	string s2{"Hello"};
	s2=s1; //string2 will no longer contain hello
	
	cout<<s1<<endl;
	cout<<s2<<endl;
	
	string part1 {"C++"};
	string part2 {"is a powerful"};
	string sentence{};
	sentence = part1 + " " + part2 +" language";
	
	cout<<sentence<<endl;
	
*/	

/*
	string s1;
	string s2{"Frank"};
	
	cout<<s2[0]<<endl;
	cout<<s2.at(0)<<endl;
	
	s2[0] ='f';
	s2.at(0) ='p';
	
	cout<<s2<<endl;
*/

	
	//object.sbstr(start_index,length)
	//substrings --> substr();
	
	string s1 {"This is a test"};
	
	cout<<s1.substr(0,4)<<endl;  //This
	cout<<s1.substr(5,2)<<endl;  //is
	cout<<s1.substr(10,4)<<endl; //test
	
	//object.find(search_string);
	cout<<endl;
	cout<<s1.find("This")<<endl;
	cout<<s1.find("is")<<endl;
	cout<<s1.find("test")<<endl;
	cout<<s1.find("e")<<endl;
	cout<<s1.find("is",4)<<endl;//starts to search from index 4
	
	
	
	cout<<"-------------------"<<endl;
	
	string st1{"Frank"};
	cout<<st1.length()<<endl;
	st1+=" James";
	cout<<st1<<endl;
	
	
	
}