#include <iostream>

using namespace std;

class Base
{
public:
    void say_hello() const
    {
        std::cout << "\nHello - I'm a base class object" << std::endl;
    }
};

class Derived : public Base
{
public:
    void say_hello() const
    {
        std::cout << "\nHello - I'm derived class object" << std::endl;
    }
};

void greetings(const Base &obj)
{
    std::cout << "Greetings: ";
    obj.say_hello();
}

// Since derived object is also a base object we can pass both derived and base objects to the greetings function
// and when we do that, since we didn't use any virtual methods always the say_hello() of the base class will be called.

int main(void)
{

    Base b;
    b.say_hello();

    Derived d;
    d.say_hello();

    std::cout << "Base class greetings: " << std::endl;
    greetings(b);

    std::cout << "Derived class greetings: " << std::endl;
    greetings(d);

    Base *ptr = new Derived();
    ptr->say_hello();

    delete ptr;

    return 0;
}

/*
    -Fundamental to OOP
    -Compile-time / early binding / static binding
    -Run time / late binding / dynamic binding

    -Runtime Polymorphism:
        being able to assign different meanings to the same function at run-time

    -Allows us to program more abstractly.
        Think general vs. specific.
        Let C++ figure out which function to call at run-time

    -Not the default in C++ , run-time polymorphism is achieved via
        -inheritance
        -Base class pointers or references
        -Virtual functions


    Compile time polymorphism -> Function overloading / operator overloading
    Run-time -> function OVERRIDING

    Account
    Withdraw  <--- checking / withdraw
    ^
    |
    |
    Savings
    Withdraw
    ^
    |
    |
    Trust
    Withdraw

    Account *p = new Trust(); // trust is an account
    p->withdraw(1000); //Account::withdraw();
                       //should be
                       //Trust::withdraw();


    An non-polymorphic example-Static Binding


    Account
    Display  <--- checking / Display
    ^
    |
    |
    Savings
    Display
    ^
    |
    |
    Trust
    Display


    void display_account(const Account &acc)
    {
        acc.display(); //will always use Account::display();
    }

*/