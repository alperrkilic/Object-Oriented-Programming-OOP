#include <iostream>
#include <cstring>
#include <ctype.h>

using namespace std;

class Mystring{
	
	private:
		char *str; //pointer to a char[] that holds a C-style string
	public:
		Mystring(); // no args constructor
		Mystring(const char *s); // overloaded constructor
		Mystring(const Mystring & source); //copy constructor
		Mystring (Mystring &&source); //move constructor
		~Mystring(); //destructor
		
		//Operator copy assignment
		Mystring &operator=(const Mystring &rhs); //copy assignment (this is not construction this is assignment. left hand side already 
		//exists.)
		
		//Move assignment
		Mystring &operator=(Mystring &&source); 
		
		Mystring operator- () const; //make lowercase
		Mystring operator+ (const Mystring &rhs) const; //concatenate
		bool operator== (const Mystring &rhs) const;
		
		void display() const; //method
		int get_length() const; //method
		const char *get_str() const; //method
};

//No-args constructor
Mystring::Mystring() :str{nullptr}
{
	str = new char [1];
	*str = '\0';
	cout<<"No-args constructor"<<endl;
}

//One-args constructor
Mystring::Mystring(const char *s) : str{nullptr}
{
	if(s==nullptr)
	{
		str= new char[1];
		*str = '\0';
	}
	else
	{
		str = new char[strlen(s)+1];
		strcpy(str,s);
	}
	cout<<"One-args constructor"<<endl;
}

//Copy constructor
Mystring::Mystring(const Mystring &source):str{nullptr}
{
	str= new char[strlen(source.str)+1];
	strcpy(str,source.str);
	cout<<"Copy constructor used."<<endl;
}

//Move constructor
Mystring::Mystring(Mystring &&source):str(source.str)
{
	source.str=nullptr;
	cout<<"Move constructor used."<<endl;
}


Mystring::~Mystring()
{
	
	if(str==nullptr)
	{
		cout<<"Calling destructor for nullptr."<<endl;
	}
	else
	{
		cout<<"Calling destructor for "<<str<<endl;
	}
	
	delete [] str;
}

//Copy assignment (operator overloading)
Mystring &Mystring::operator=(const Mystring &rhs)
{
	cout<<"Copy assignment"<<endl;
	
	if(this==&rhs)
	{
		return *this;
	}
	
	delete [] this->str;
	
	str = new char[strlen(rhs.str)+1];
	strcpy(this->str,rhs.str);
	return *this;
	
	
}

//Move assignment - operator overloading.

Mystring &Mystring::operator=(Mystring &&rhs)
{
	cout<<"Using move assignment."<<endl;
	
	if(this==&rhs)
	{
		return *this;
	}
	
	delete [] str;
	str = rhs.str;
	rhs.str=nullptr;
	return *this;
	
}

//Equality
bool Mystring::operator==(const Mystring &rhs)const
{
	return (strcmp(str,rhs.str)==0);
}

//Tolower
Mystring Mystring::operator-() const
{
	char *buff = new char[strlen(str)+1];
	strcpy(buff,str);
	
	for(size_t i=0;i<strlen(buff);i++)
	{
		buff[i]=tolower(buff[i]);
	}
	
	Mystring temp{buff};
	delete [] buff;
	return temp;
}

//Concatenate

Mystring Mystring::operator+ (const Mystring &rhs)const
{
	char *buff = new char[strlen(rhs.str)+1];
	strcpy(buff,str);
	strcat(buff,rhs.str);
	Mystring temp{buff};
	delete [] buff;
	return temp;
	
	//in operator overloading method, str belongs to larry and rhs.str belongs to stooges 
	//what we do here is we copy larry into buff first and then concatenate stooges to the larry and create temp object that
	//has larry + stooges and return this to the right hand side of the result as shown in the below.
	//					__________________________________ (returning temp to that section and assigning it to result object of Mystring class.) 
	//Mystring result = larry + stooges; //larry.operator+ (stooges);
}


void Mystring::display() const{
	cout<<str<<" : "<<get_length()<<endl;
}

int Mystring::get_length() const
{
	return strlen(str);
}

const char *Mystring::get_str() const 
{
	return str;
}

int main(void){
	
	
	return 0;
}

/*
	Mystring operator- make lowercase
	
	Mystring larry1{"LARRY"}
	Mystring larry2;
	
	larry1.display();
	larry2=-larry1; // larry1.operator-();
	
	larry1.display();	//LARRY
	larry2.display();	//larry
	
	Mystring Mystring::operator-() const{
		
		char *buff = new char[strlen(str)+1];
		strcpy(buff,str);
		
		for(size_t i=0;i<strlen(buff);i++)
			buff[i] = tolower(buff[i]);
			
		Mystring temp{buff};
		delete [] buff;
		return temp;
	};
	
	
	bool Mystring::operator==(const Mystring &rhs) const
	{
		if(strcmp(str,rhs.str) == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	// if(s1==s2) //s1 and s2 are Mystring objects
	
	
	Mystring operator+ (concatenation)
	
	Mystring larry{"Larry"};
	Mystring moe{"Moe"};
	Mystring stooges{"is one of the three stooges"};
	
	Mystring result = larry + stooges; //larry.operator+ (stooges);
	result = moe + "is also a stooge"; // moe.operator+ ("is also a stooge");
	result = "Moe" + stooges; ERROR --> "Moe".operator+(stooges) is not valid.
	
	
	Mystring Mystring::operator+(const Mystring &rhs) const
	{
		size_t buff_size = strlen(str) + strlen(rhs.str)+1;
	
		char *buff = new char[buff_size];
		strcpy(buff,str);
		strcat(buff,rhs.str);
		Mystring temp {buff};
		delete [] buff;
		return temp;
	}
	
*/