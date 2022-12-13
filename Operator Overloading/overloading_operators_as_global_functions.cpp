#include <iostream>
#include <cstring>
#include <ctype.h>

using namespace std;

class Mystring{
		//Declaring non-member overloading operators as friends.
		friend bool operator== (const Mystring &lhs, const Mystring &rhs);
		friend Mystring operator- (const Mystring &obj);
		friend Mystring operator+ (const Mystring &lhs, const Mystring &rhs);
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

//Equality

bool operator==(const Mystring &lhs, const Mystring &rhs)
{
	return (strcmp(lhs.str,rhs.str) == 0);
}

//Make lowercase
//this my string is indicating the return type of the function which means it returns an object of Mystring class.
//______
Mystring operator-(const Mystring &obj)
{
	char *buff = new char[strlen(obj.str)+1];
	strcpy(buff,obj.str);
	
	for(size_t i=0;i<strlen(buff);i++)
		buff[i]=tolower(buff[i]);
		
	Mystring temp{buff};
	delete [] buff;
	return temp;
	
}

//string concatenation with non-member + operator
Mystring operator+(const Mystring &lhs, const Mystring &rhs)
{
	char *buff = new char[strlen(lhs.str)+strlen(rhs.str)+1];
	
	strcpy(buff,lhs.str);
	strcat(buff,rhs.str);
	
	Mystring temp{buff};
	delete [] buff;
	return temp;
	
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
	
	Mystring larry{"Larry"};
	larry.display();
	
	larry= -larry;
	larry.display();
	
	cout<<boolalpha<<endl;
	
	Mystring moe{"Moe"};
	Mystring stooge = larry;
	
	cout<< (larry == moe) <<endl;
	cout<< (larry == stooge) <<endl;
	
	Mystring stooges = "Larry "+moe;
	stooges.display();
	
	Mystring two_stooges = moe + " " + "Larry";
	two_stooges.display();
	
	Mystring three_stooges = moe + " " +larry + " " + "Curly";
	three_stooges.display();
	
	return 0;
}



/*
	Often declared as friend functions in the class declaration:
	
	Mystring operator- (const Mystring &obj)
	{
		char *buff = new char[strlen(obj.str)+1];
		strcpy(buff,obj.str);
		
		for(size_t i=0;i<strlen(buff);i++)
			buff[i]=tolower(buff[i]);
		
		Mystring temp{buff};
		delete [] buff;
		return temp;
	}
	
	The difference is as member methods we would say str, but now since it's not a member function we should say obj.str
	
*/

/*
	Nonmember overloaded equality function:
	
	bool operator== (const Mystring &lhs, const Mystring &rhs)
	{
		if(strcmp(lhs.str,rhs.str)==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	if declared as a friend of Mystring can access private str attribute otherwise we must use getter methods.	
	
*/
/*
	Mystring operator+ (concatenation)
	
	Mystring larry {"Larry"},
	Mystring moe {"Moe"};
	Mystring stooges {"is one of the three stooges"};
	
	Mystring result = larry + stooges //operator+ (larry,stooges);
	
	result = moe + " is also a stooge"; //operator+ (moe," is also a stooge");
	
	result = "Moe" + stooges; // OK with non member functions.
	
	
	Mystring operator+ (concatenation)
	
	Mystring operator+ (const Mystring &lhs, const Mystring &rhs)
	{
		size_t buff_size = strlen(lhs.str) + strlen(rhs.str) + 1;	
		
		char *buff = new char[buff_size];
		
		strcpy(buff,lhs.str);
		strcat(buff,rhs.str);
		
		Mystring temp {buff};
		delete [] buff;
		return temp;
	}
	
*/