#include <iostream>

using namespace std;

int main(void){
	
}
/*
	Inheritance:
		*Process of creating new classes from existing classes.
		*Reuse mechanism
	Single Inheritance:
		*A new class is created from 'single' class
	Multiple Inheritance:
		*A new class is created from two (or more) other classes.
*/
/*
	Base class (parent class,super class)
	*The class being extended or inherited from
	
	Derived class(child class,sub class)
	*The class being created from the base class.
	*Will inherit attributes and operations from base class.
*/
/*
	Terminology:
	-Is a relationship ?
		Public inheritance
		Derived classes are sub-types of their base classes.
		(Circle is a shape and a savings account is an account)
	-Generalization
		Combining similar classes into a single, more general class based on common attributes
	-Specialization
		Creating new classes from existing classes providing more specialized attributes or operations
	-Inheritance or Class Hierarchies
		Organization of our inheritance relationships
*/
/*
	Class hierarchy
	
	Classes:
		A
	----||---
	|		|
	B		C
	|
	D
	|
	E
	
	In this example:
	A is root
	B is derived from A
	C is derived from A
	D is derived from C
	E is derived from D
	
	Note that C is not related with B they don't have a direct relationship
	B is also A and D is also a B and also A.
	E is also D,B and A
	C is an A
	But B is not a C.
*/