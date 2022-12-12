#include <iostream>
#include <cstring>

using namespace std;

class Mystring{
	
	private:
		char *str; //pointer to a char[] that holds a C-style string
	public:
		Mystring(); // no args constructor
		Mystring(const char *s); // overloaded constructor
		Mystring(const Mystring & source); //copy constructor
		~Mystring(); //destructor
		void display() const; //method
		int get_length() const; //method
		const char *get_str() const; //method
};

Mystring::Mystring() :str{nullptr}
{
	str = new char [1];
	*str = '\0';
}

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
}

Mystring::Mystring(const Mystring &source):str{nullptr}
{
	str= new char[strlen(source.str)+1];
	strcpy(str,source.str);
}

Mystring::~Mystring()
{
	delete [] str;
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
	
	Mystring empty;
	Mystring larry("Larry");
	Mystring stooge{larry};
	
	empty.display();
	larry.display();
	stooge.display();
	
	
	return 0;
}
/*
	The only operator that the compiler provides a default 
	implementation is assignment operator (=)
	what is the addition of the 2 player object? 
	-with operator overloading we can decide it.
*/
/*
	The following operators cannot be overload:
	1	::
	2	:?
	3	.*
	4	.
	5	sizeof
*/

/*
	REMINDER:
	When we try to get a const object that is private 
	by getters we have to assure the compiler that
	we won't change the value of it. therefore when using getters,
	std::string get_name() const;
*/