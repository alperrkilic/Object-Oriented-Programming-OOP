#include <iostream>
#include <vector>

/*
    Since shape is an abstract class,
    we cannot say statements below because we would get a compiler error
        Shape s;
        Shape *p = new Shape();
*/

class Shape // abstract class
{
private:
    // attributes common to all shapes
public:
    virtual void draw() = 0;   // pure virtual function
    virtual void rotate() = 0; // pure virtual function
    virtual ~Shape() {}
};

class Open_Shape : public Shape // abstract class since I hadn't overridden the pure virtual functions
{
public:
    virtual ~Open_Shape() {}
};

class Closed_Shape : public Shape // abstract class since I hadn't overridden the pure virtual functions
{
public:
    virtual ~Closed_Shape() {}
};

class Line : public Open_Shape // since I have implemented the pure virtual functions from the base, this class is a CONCRETE class
{
public:
    virtual void draw() override
    {
        std::cout << "Drawing a line" << std::endl;
    }
    virtual void rotate() override
    {
        std::cout << "Rotating a line" << std::endl;
    }
    virtual ~Line() {}
};

class Circle : public Closed_Shape
{
public:
    virtual void draw() override
    {
        std::cout << "Drawing a circle" << std::endl;
    }
    virtual void rotate() override
    {
        std::cout << "Rotating a circle" << std::endl;
    }
    virtual ~Circle() {}
};

class Square : public Closed_Shape
{
public:
    virtual void draw() override
    {
        std::cout << "Drawing a square" << std::endl;
    }
    virtual void rotate() override
    {
        std::cout << "Rotating a square" << std::endl;
    }
    virtual ~Square() {}
};

void screen_refresh(const std::vector<Shape *> &shapes)
{
    std::cout << "Refreshing " << std::endl;

    for (const auto p : shapes)
    {
        p->draw();
    }
}

int main(void)
{

    std::cout << "Circle" << std::endl;

    Shape *ptr = new Circle();
    ptr->draw();
    ptr->rotate();

    std::cout << "Line" << std::endl;

    Shape *s1 = new Line();
    s1->draw();
    s1->rotate();

    std::cout << "Square" << std::endl;

    Shape *s2 = new Square();
    s2->draw();
    s2->rotate();

    std::cout << "\nVector" << std::endl;

    std::vector<Shape *> shapes{ptr, s1, s2};

    for (const auto p : shapes)
    {
        p->draw();
        p->rotate();
    }

    std::cout << std::endl;
    std::cout << std::endl;

    screen_refresh(shapes);

    delete ptr;
    delete s1;
    delete s2;

    return 0;
}

/*
    Abstract class:
        Cannot instantiate objects
        These classes are used as base classes in inheritance hierarchies
        Often referred to as Abstract base classes

    Concrete class:
        Used to instantiate objects from
        All their member functions are defined
            * Checking Account, Savings Account
            * Faculty, Staff
            * Enemy , Level Boss

    Abstract Base Class:
        Too generic to create objects from
            *Shape, Employee, Account, Player
        Serves as parent to derived classes that may have objects
        Contains at least one pure virtual function


    PURE VIRTUAL FUNCTION:
    -Used to make a class abstract
    -Specified with "=0" in its declaration

    Example:
        virtual void function() = 0;

    -Typically don't provide implementation
    -Derived classes MUST override the pure virtual functions in the base class in order to be a concrete class.
    -Used when it doesn't make sense for a base class to have an implementation

    For example:
        Suppose we have a shape hierarchy, the concept of a shape is too general or too abstract to have shape objects in our system
        Define draw method as pure virtual in the shape class and for example the triangle inherits from shape must implement this
        draw method

        virtual void draw() = 0; // Shape

*/