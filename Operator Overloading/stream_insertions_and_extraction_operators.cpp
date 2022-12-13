#include <iostream>
#include <cstring>
#include <ctype.h>

using namespace std;

class Mystring{

		friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
		friend std::istream &operator>>(std::istream &is, const Mystring &rhs);

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
		
		
		void display() const; //method
		
		//getters
		int get_length() const;
		const char *get_str() const; 
};

//Overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs)
{
	os<<rhs.str;
	return os;
}

//Overloaded extraction operator
std::istream &operator>>(std::istream &is, Mystring &rhs)
{
	char *buff = new char[1000]; //initialize new character array.
	is >> buff; // into istream take that buff
	
	rhs = Mystring{buff}; //Mystring{buff} is a temporary object it will be assigned to rhs and will be deleted
	//since rhs hava been taken by reference it will be updated at where it's called.
	delete [] buff;
	return is;
}



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
	//cout<<"One-args constructor"<<endl;
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
	
	Mystring larry {"Larry"};
	Mystring moe {"Moe"};
	Mystring curly;
	
	cout<<"Enter the third stooge's name: ";
	cin>>curly;
	
	cout<<"The three stooges are: "<<larry<<", "<<moe<<" and "<<curly<<endl;
	
	
	cout<<"\nEnter the three stooges names seperated by a space: ";
	cin>>larry>>moe>>curly;
	
	cout<<"The three stooges are "<<larry<< ", "<<moe<<" and "<<curly<<endl;
	
	return 0;
	
	//Remember last created object, will be executed first after its' destructor is called.
	
}



/*
	Stream insertions and extraction operators (<<, >>)
	
	Mystring larry{"Larry"};
	
	cout<< larry << endl;
	
	Player hero{"Hero",100,33};
	
	cout<< hero << endl; // {name:Hero,health:100,xp:33};
	
	//To define what would this print or what cin would get we can use insertion and extraction operators with overloading
	Mystring larry;
	cin>>larry; // what will it get ? we need to define
	cout<<larry; // what would this print ? 
	
	Player hero;
	cin>>hero;
	
	ostream --> output stream
	
	std::ostream &operator<< (std::ostream &os, const Mystring &obj)
	{
		os << obj.str; //if friend function.
		os << obj.get_str(); // if not friend function.
		
		return os;
	}
	
	Important note:
	-Return a reference to the ostream so we can keep inserting.
	-Don't return ostream by value.
	
	istream --> insert stream
	
	std::istream &operator>> (std::istream &is, Mystring &obj)
	{
		char *buff = new char[1000];
		is >> buff;
		
		obj = Mystring{buff};
		delete [] buff;
		return is;
	}
	
	Important note:
	-Return a reference to the istream so we can keep inserting
	-Update the object passed in
	
*/