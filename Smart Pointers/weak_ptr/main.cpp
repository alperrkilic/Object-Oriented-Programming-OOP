#include <iostream>
#include <memory>

using namespace std;

class B;

class A
{
    std::shared_ptr<B> b_ptr;

public:
    void set_B(std::shared_ptr<B> &b)
    {
        b_ptr = b;
    }

    A() { cout << "A constructor" << endl; }
    ~A() { cout << "A destructor" << endl; }
};

class B
{

    std::weak_ptr<A> a_ptr;

public:
    void set_A(std::shared_ptr<A> &a)
    {
        a_ptr = a;
    }

    B() { cout << "B constructor " << endl; }
    ~B() { cout << "B destructor" << endl; }
};

int main(void)
{

    shared_ptr<A> a = make_shared<A>();
    shared_ptr<B> b = make_shared<B>();

    // Causes to memory leak, destructors never got called
    a->set_B(b);
    b->set_A(a);

    return 0;
}

/*
    Provides a non-owning "weak" reference

    *weak_ptr<T>
        -Points to an object of type T on the heap
        -Does not participate in owning relationship
        -Always created from a shared_ptr
        -Does NOT increment or decrement reference use count
        -Used to prevent strong reference cycles which could prevent objects from being deleted


    weak_ptr - circular or cyclic reference

    A refers to B
    B refers to A
    Shared strong ownership prevents heap deallocation


    Solution:
    Make one of the pointers non-owning or "weak"
    Now heap storage is deallocated properly.


*/