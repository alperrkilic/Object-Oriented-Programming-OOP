#include <iostream>
#include <string>

using namespace std;

class Base{
	
	public:
		int a{0};
		void display(){std::cout<<a<<" , "<<b<<" , "<<c<<endl;} //member method has access to all
	protected:
		int b{0};
	private:
		int c{0};
	
	
};

class Derived: public Base{
	
	//Note friends of Derived have access to only what derived has access to
	
	//a will be public
	//b will be protected
	//c will not be accessible
	
	public:
		void access_base_members(){
			a=100; //OK
			b=200; //OK
			//c=300; //not accessible (compiler error)
			//although it produces a compiler error c have been inherited from its parents
			//but it's just not accessible
		}
	
};

int main(void){
	
	cout<<"=========Base member access from Objects=========="<<endl;
	Base base;
	base.a=100;
	
	cout<<"=========Base member access from derived objects========="<<endl;
	Derived d;
	d.a=100; //OK
	//d.b=200; //compiler error
	//d.c=300; //compiler error	
	cout<<endl;
	return 0;
}
/*
	Protected members
	*Accessible from the base class itself
	*Accessible from classes derived from base
	*Not accessible by objects of Base or Derived 
	
	Base class:						Access in Derived Class
	public:a		public			public:a
	protected:b		inheritance		protected:b
	private:c						c: no access
	
	protected class members will be accessible by all derived
	classes.
	
	Base class:							Access in Derived Class
	public:a		protected			protected:a
	protected:b		inheritance			protected:b
	private:c							c: no access
	
	
	Base class:							Access in Derived Class
	public:a		private				private:a
	protected:b		inheritance			private:b
	private:c							c: no access
	
	
*/