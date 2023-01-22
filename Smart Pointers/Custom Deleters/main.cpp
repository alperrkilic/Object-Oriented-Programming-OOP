#include <iostream>
#include <memory>

using namespace std;

class Test
{

private:
    int data;

public:
    Test() : data{0} { std::cout << "\tTest Constructor: " << data << std::endl; }
    Test(int data) : data{data} { std::cout << "\tTest Constructor: " << data << std::endl; }
    int get_data() const { return this->data; }
    ~Test() { std::cout << "\tTest Destructor: " << data << std::endl; }
};

void my_deleter(Test *ptr)
{
    std::cout << "\tUsing my custom function deleter" << std::endl;
    delete ptr;
}

int main(void)
{

    {
        std::shared_ptr<Test> ptr1{new Test{100}, my_deleter};
    }

    std::cout << "\n---------------" << std::endl;

    {
        std::shared_ptr<Test> ptr2{new Test{200}, [](Test *ptr)
                                   { std::cout << "\tUsing my custom lambda deleter" << std::endl;
                                     delete ptr; }};
    }

    return 0;
}

/*
    Custom deleter:
        * Sometimes when we destroy a smart pointer we need more than
        to just destroy the object on the heap
        * These are special use-cases
        * C++ smart pointers allow you to provide custom deleter
        * Lots of way to achieve this
            -Functions
            -Lambdas
            -Others
*/

/*
    void my_deleter(Some_Class *raw_pointer)
    {
        delete raw_pointer;
    }

    shared_ptr<Some_Class> ptr { new Some_Class{},my_deleter};


    //Example:
    void deleter(Test *ptr)
    {
        cout<<"In my custom deleter"<<endl;
        delete ptr;
    }

    shared_ptr<Test> ptr {new Test{},my_deleter};

*/