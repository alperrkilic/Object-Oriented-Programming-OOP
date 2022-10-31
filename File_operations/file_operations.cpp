#include <iostream>
#include <fstream> //file stream
#include <string>

using namespace std;

int main(void){
	
	char name[100];
	
	/*
	cout<<"File read example.."<<endl;
	

	ofstream outfile;
	outfile.open("myfile.txt");
	cout<<"Writing to file"<<endl;
	cout<<"Enter your name: ";
	cin.getline(name,100);
	//cin.ignore();
	
	outfile<<"Your name: "<<name<<endl;
	outfile.close();
	*/
	
	ifstream inFile;
	
	inFile.open("myfile.txt");
	cout<<"File read example.."<<endl;
	cout<<"--------------------"<<endl;
	
	inFile.getline(name,100);
	cout<<name;
	
	inFile.close();
	
	
	
	
	
}