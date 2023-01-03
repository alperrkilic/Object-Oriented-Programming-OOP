#include <iostream>

using namespace std;

class Base{
	
	private:
		int value;
	public:
		Base() : value{0}
		{
			cout<<"Base no-args constructor"<<endl;
		}
		
		Base(int x) : value{x}
		{
			cout<<"int Base constructor"<<endl;
		}
		
		Base(const Base&other) : value{other.value}
		{
			cout<<"Base copy constructor"<<endl;
		}
		
		Base &operator=(const Base &rhs)
		{
			cout<<"Base operator="<<endl;
			if(this==&rhs)
			{
				return *this;
			}
			else
			{
				value=rhs.value;
				return *this;	
			}
		}
		
		~Base(){cout<<"Base destructor"<<endl;}
	
};


class Derived : public Base{
	
	private:
		int doubled_value;
		
	public:
		
		Derived() : Base{}
		{
			cout<<"Derived no-args constructor"<<endl;
		}
		
		Derived(int x)
			:Base{x},doubled_value{x*2}
		{
			cout<<"int Derived constructor"<<endl;
		}
		
		Derived(const Derived&other)
			:Base{other},doubled_value{other.doubled_value}
		{
			cout<<"Derived copy constructor"<<endl;		
		}
		
		Derived &operator=(const Derived &rhs)
		{
			cout<<"Derived operator="<<endl;
			if(this == &rhs)
			{
				return *this;
			}
			else
			{
				Base::operator=(rhs); // this line is important
				doubled_value=rhs.doubled_value;
				return *this;
			}
		}
		
		~Derived()
		{
			cout<<"Derived destructor"<<endl;
		}
	
};


int main(void){
	
	//Base b{100};
	//Base b1 {b};
	//b=b1;
	//firstly destructor for b1 will be called and after that destructor for b will be called.
	
	Derived d{100};
	Derived d1{d};
	d = d1;
	
	
	
	return 0;
}

/*
	Derived::Derived(const Derived &other) : Base(other) , {Derived initializaiton list} {
		//code
	}
*/