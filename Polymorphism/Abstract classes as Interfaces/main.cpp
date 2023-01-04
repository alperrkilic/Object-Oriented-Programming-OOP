#include <iostream>

class I_Printable
{
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);

public:
    virtual void print(std::ostream &os) const = 0; // pure virtual
};

std::ostream &operator<<(std::ostream &os, const I_Printable &obj)
{
    obj.print(os);
    return os;
}

class Account : public I_Printable
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Account::withdraw" << std::endl;
    }

    virtual void print(std::ostream &os) const override
    {
        os << "Account Display" << std::endl;
    }

    virtual ~Account()
    {
        // std::cout << "Account::destructor" << std::endl;
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
        // std::cout << "Checking::destructor" << std::endl;
    }

    virtual void print(std::ostream &os) const override
    {
        os << "Checking Display" << std::endl;
    }
};

class Savings : public Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Savings::withdraw" << std::endl;
    }

    virtual void print(std::ostream &os) const override
    {
        os << "Savings Display" << std::endl;
    }

    virtual ~Savings()
    {
        // std::cout << "Savings::destructor" << std::endl;
    }
};

class Trust : public Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Trust::withdraw" << std::endl;
    }

    virtual void print(std::ostream &os) const override
    {
        os << "Trust Display" << std::endl;
    }

    virtual ~Trust()
    {
        // std::cout << "Trust::destructor" << std::endl;
    }
};

class Dog : public I_Printable
{

public:
    virtual void print(std::ostream &os) const override
    {
        os << "Woof Woof!!" << std::endl;
    }
};

int main(void)
{

    Account *p1 = new Account();
    std::cout << *p1 << std::endl;

    Account *p2 = new Checking();
    std::cout << *p2 << std::endl;

    Dog *dog = new Dog();
    std::cout << *dog << std::endl;

    return 0;
}

/*
    What is using a class as an interface ?
    -An abstract class that has only pure virtual functions
    -These functions provide a general set of services to the user of the class.
    -Provided as public
    -Each subclass is free to implement these services as needed.
    -Every service (method) must be implemented
    -The service type information is strictly enforced.

    Interface classes are shown as : I_shape (I_ indicates it's an interface class.)

*/