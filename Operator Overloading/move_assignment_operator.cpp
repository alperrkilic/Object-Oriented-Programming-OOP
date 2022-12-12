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
		Mystring (Mystring &&source); //move constructor
		~Mystring(); //destructor
		
		//Operator copy assignment
		Mystring &operator=(const Mystring &rhs); //copy assignment (this is not construction this is assignment. left hand side already 
		//exists.)
		
		//Move assignment
		Mystring &operator=(Mystring &&source); 
		
		
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
	
	//WHAT'S HAPPENING:
	
	Mystring a{"Hello"}; //one-args constructor is called
	//and hello initialized into str.
	
	a = Mystring{"Hola"}; //for rhs one-args constructor
	//is called and since it is an r-value reference
	//they are assigned with move assignment into a.
	//after they are assigned with move assignment
	//destructor for Mystring{"Hola"} is called.
	a = "Bonjour";
	//as same with the above, first one-args constructor
	//will be called, temporary object that has a str
	//pointer variable will be created and then since it is
	//temporary which means r-value, it will be assigned
	//by move assignment and after that that temporary
	//object will be destroyed and its' destructor will
	//be called.
	
	//Lastly, destructor for a will be called.
	//this is what happens in this program
	
	return 0;
}
/*
	You can choose to overload the move assignment operator 
		C++ will use the copy assignment operator if necessary.
		
	Mystring s1;
	s1 = Mystring {"Frank"}; //move assignment
	
	Mystring object initialized to frank must be constructed and once its constructed it has no name.
	It's a temporary object. which means its an R-Value. That means when we assign it to s1, the move assignment operator will be called
	Since we're providing an r-value refence
	
*/

/*
	Where does it actually work?
	Type &Type::operator=(Type &&rhs);
	
	Mystring &Mystring::operator=(Mystring &&rhs);
	s1=Mystring{"Joe"}; //move operator= called (rhs is a temp-value (R-value))
	s1="Frank"; //move operator= called;
*/

/*
	Implementation:
	
	Mystring &Mystring::operator=(Mystring &&rhs)
	{
		if(this==&rhs) //self assignment check.
			return *this; //if self assignment, return current object.
		
		delete [] str; //deallocate current storage.
		str = rhs.str; //steal the pointer.
		
		rhs.str = nullptr; //null out the rhs object since it is temporary.
		
		return *this; //return current object.
	}
	
*/