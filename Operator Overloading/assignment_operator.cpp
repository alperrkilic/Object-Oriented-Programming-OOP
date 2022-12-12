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
		
		Mystring &operator=(const Mystring &rhs); //copy assignment (this is not construction this is assignment. left hand side already 
		//exists.)
		
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
		
	Mystring a {"Hello"}; //overloaded constructor.
	Mystring b; //no-args constructor
	
	//operator overloading assigning two objects of the Mystring class.
	b = a; // b.operator(a);
	b.display(); //display method (deep copy is made)
	
	b = "This is a test."; //b.operator("This is a test");
	b.display();
	
	return 0;
}

/*
	Mystring s1 {"Frank"}
	Mystring s2 = s1; // Not assignment same as Mystring s2{s1};
	s2 = s1; --> assignment
	Type &Type::operator= (const Type &rhs);
	
	Mystring &Mystring::operator= (const Mystring &rhs);

	s2 = s1;

*/

/*
	Mystring &Mystring::operator= (const Mystring &rhs)
	{
		if(this==&rhs)	//p1=p1;
		{
			return *this;	//return current object
		}
		delete [] str;	//deallocate storage for this->str since we are overwriting it.
		str = new char[strlen(rhs.str)+1]; //allocate storage for the deep copy.
		strcpy(str,rhs.str);	//perform the copy.
		
		return *this; // return the current by reference to allow chain assignment.
*/