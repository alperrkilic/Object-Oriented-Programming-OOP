#include <iostream>

class Base
{
public:
    virtual void say_hello() const
    {
        std::cout << "Hello, I'm a base class object" << std::endl;
    }
    virtual ~Base() {}
};

class Derived : public Base
{
public:
    virtual void say_hello() const override
    {
        std::cout << "Hello, I'm a derived class object" << std::endl;
    }

    virtual ~Derived() {}
};

int main(void)
{

    Base *p1 = new Base();
    p1->say_hello();

    Base *p2 = new Derived();
    p2->say_hello();

    return 0;
}

/*
    Override Specifier:
        *We can override Base class virtual functions
        *The function signature and return must be EXACTLY the same
        *If they are different then we have redefinition NOT overriding
        *Redefinition is statically bound while Overriding is dynamically bounding

    class Base{
        public:
            virtual void say_hello() const
            {
                std::cout<<"Hello - I'm a base class object."<<std::endl;
            }

            virtual ~Base();
    };


    class Derived : public Base{
        public:
            virtual void say_hello() // Notice no const here - NOT OVERRIDING, IT IS REDEFINITION
            {
                std::cout<<"Hello - I'm a derived class object."<<std::endl;
            }

            virtual ~Derived();
    };

    The difference:
        Base : virtual void say_hello() const;
        Derived :virtual void say_hello();
    Problem: This difference will cause unexpected behavior when we use a base class pointer

        Base *p1 = new Base();
        p1->say_hello(); // Hello I'm a base class object

        Base *p2 = new Derived();
        p2->say_hello(); // Hello I'm a base class object.

        *say_hello() method signatures are different.
        *So Derived class redefines say_hello() instead of overriding it.

*/