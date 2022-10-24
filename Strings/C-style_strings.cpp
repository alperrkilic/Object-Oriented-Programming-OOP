#include <cstring>
#include <vector>
#include <iostream>
#include <cctype>

using namespace std;

int main(void){
	
	
	//C-style Strings
	//string copy --> strcpy(string_name, "quote");
	//string concatenation --> strcat(string_name, "Frank");
	//string comparison --> strcmp(str1,str2);
	//string length --> strlen(string_name);
	
	char first_name[20]{};
	char last_name[20]{};
	char full_name[50]{};
	char temp[50]{};
	
	
	cout<<"Please enter your first name: ";
	cin>>first_name;
	
	
	cout<<"Please enter your last name: ";
	cin>>last_name;
	
	cout<<"--------------------------"<<endl;
	
	cout<<"Hello, "<<first_name<<" your first name has "<<strlen(first_name)<<" characters"<<endl;
	cout<<"and your last name, "<<last_name<<" has "<<strlen(last_name)<<" characters"<<endl;
	
	strcpy(full_name,first_name); //copy first_name string to the full_name string
	strcat(full_name," ");
	strcat(full_name,last_name);
	
	cout<<"Your full name is "<<full_name<<endl;
	
	cout<<"-------------------------------"<<endl;
	
	
	//instead of these operations we could use
	//cin.getline(full_name,50);
	
	char full_Name[50]{};
	
	
	cout<<"Enter your full name: ";
	cin.getline(full_Name,50);
	cout<<"Your full name is "<<full_name<<endl;
	
	
	//if(strcmp(str1,str2)==0) --> then str1 and str2 is equal
	 
	
	
}