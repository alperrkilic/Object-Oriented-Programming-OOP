#include <iostream>

class Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Account::withdraw" << std::endl;
    }

    virtual ~Account()
    {
        std::cout << "Account::destructor" << std::endl;
    }
};

class Checking : public Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Checking::withdraw" << std::endl;
    }

    virtual ~Checking()
    {
        std::cout << "Checking::destructor" << std::endl;
    }
};

class Savings : public Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Savings::withdraw" << std::endl;
    }

    virtual ~Savings()
    {
        std::cout << "Savings::destructor" << std::endl;
    }
};

class Trust : public Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Trust::withdraw" << std::endl;
    }

    virtual ~Trust()
    {
        std::cout << "Trust::destructor" << std::endl;
    }
};

int main(void)
{

    std::cout << "Pointers : " << std::endl;

    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    std::cout << "Clean-up : " << std::endl;

    delete p1;
    delete p2;
    delete p3;
    delete p4;

    /*
        Difference:

        If destructors are not virtual output is:

        Pointers :
        In Account::withdraw
        In Savings::withdraw
        In Checking::withdraw
        In Trust::withdraw
        Clean-up :
        Account::destructor
        Account::destructor
        Account::destructor
        Account::destructor

        If destructors are virtual output is:

        Pointers :
        In Account::withdraw
        In Savings::withdraw
        In Checking::withdraw
        In Trust::withdraw
        Clean-up :
        Account::destructor
        Savings::destructor
        Account::destructor
        Checking::destructor
        Account::destructor
        Trust::destructor
        Account::destructor

    */

    return 0;
}

/*
    -Problems can happen when we destroy polymorphic objects.
    -If a derived class is destroyed by deleting its storage via the base class pointer and the class a non-virtual destructor.
    Then the behavior is undefined in the C++ standard.
    -Derived objects must be destroyed in the correct order starting at the correct destructor

    -Solution / Rule:
        *If a class has virtual functions
        *Always provide a public virtual destructor
        *If base class is virtual then all derived class destructors are also virtual

    class Account{
        public:
            virtual void withdraw(double amount);
            virtual ~Account();
            ...
    };

*/