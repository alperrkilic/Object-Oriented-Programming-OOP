#include <iostream>

using namespace std;

class Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Account::withdraw" << std::endl;
    }
};

class Checking : public Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In checking::withdraw" << std::endl;
    }
};

class Savings : public Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In savings::withdraw" << std::endl;
    }
};

class Trust : public Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In trust::withdraw" << std::endl;
    }
};

int main(void)
{

    std::cout << "Pointers: " << std::endl;

    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    std::cout << "Clean-up" << std::endl;

    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}

/*
    -Virtual Functions:

        *Declaring function you want to override as virtual in the base class.
        *Virtual functions are virtual all the way down the hierarchy from this point
        *Dynamic polymorphism only via Account class pointer or reference

    -Declaring virtual Functions:

        *Override the function in the derived class.
        *Function signature and return type must match EXACTLY.
        *Virtual keyword not required but is best practice.
        *If you don't provide an overridden version it is inherited from it's base class.

    class Checking : public Account{
        virtual void withdraw(double amount);
        ...
    }

*/