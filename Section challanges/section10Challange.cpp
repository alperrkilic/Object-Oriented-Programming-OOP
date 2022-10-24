#include <string>
#include <iostream>

using namespace std;

int main(void){
	
    string alphabet {"abcdefghiklmnopqrstvxyzABCDEFGHIKLMNOPQRSTVXYZ "};
    string key {"1QAZqaz2WSXwsx3EDCedc4RFVrfv5TGBtgb6YHNyhn7UJM "};
	
	string secret_message{};
	
	cout<<"Enter your secret message: ";
	getline(cin,secret_message);
	
	
	string encrypted_message{};
	
	cout<<"\nEncrypting message..."<<endl;
	
	for(char c: secret_message)
	{
		size_t position = alphabet.find(c);
		
		if(position!=string::npos) //if find(c) exists 
		{
			char new_char{ key.at(position) };
			encrypted_message+=new_char;
		}
		else
		{
			encrypted_message +=c;
		}
	}
	
	cout<<"\nEncrypted message: "<<encrypted_message<<endl;
	
	string decrypted_message{};
	cout<<"\nDecrypting message..."<<endl;
	
	for(char c:encrypted_message)
	{
		size_t position = key.find(c);
		
		if(position!=string::npos)
		{
			char new_character { alphabet.at(position) };
			decrypted_message+=new_character;
		}
		else
		{
			decrypted_message+=c;
		}
	}
	
	cout<<"\nDecrypted message is: "<<decrypted_message<<endl;
	
	//The string search function such as find will return string::npos if they can't find the search string
	
	
}