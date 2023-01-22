#include <iostream>
#include <memory>

class Test
{

private:
    int data;

public:
    Test() : data{0} { std::cout << "Test constructor" << std::endl; }
    Test(int data) : data{data} { std::cout << "Test constructor: " << data << std::endl; }

    int get_data() { return this->data; }
    ~Test() { std::cout << "Test destructor: " << data << std::endl; }
};

using namespace std;

int main(void)
{
    // Test t1{1000};

    // Test *t2 = new Test{1000};
    // delete t2;

    /*
        The difference is, with unique_ptr we don't need
        delete it automatically deletes the pointer
    */

    std::unique_ptr<Test> t1{new Test{1000}};
    std::unique_ptr<Test> t2 = std::make_unique<Test>(100);

    std::unique_ptr<Test> t3;

    t3 = std::move(t1);

    if (!t1)
    {
        std::cout << "t1 is nullptr" << std::endl;
    }

    /*
        std::vector<std::unique_ptr<Account>> accounts;

        accounts.push_back{make_unique<Checking_Account>("James",1000)};
        accounts.push_back{make_unique<Savings_Account>("Billy",1000,5.2)};
        accounts.push_back{make_unique<Trust_Account>("Bobby",5000,4.5)};


        // will give compiler error since it cannot copy unique pointer.
        for(auto acc: accounts)
        {
            std::cout<<*acc<<std::endl;
        }

        //To solve this problem:

        for(const auto &acc: accounts)
        {
            std::cout<<*acc<<std::endl;
        }

    */

    return 0;
}

/*
    unique_ptr<T>
        *Points to an object of type T on the heap
        *it is unique - there can only be one unique_ptr<T> pointing to the object on the heap
        *Owns what it points to
        *Cannot be assigned or copied
        *Can be moved
        *When the pointer is destroyed what it points to is automatically destroyed
*/

/*
    unique_ptr - vectors and move

    {
        std::vector<std::unique_ptr<int>> vec;

        std::unique_ptr<int> ptr {new int{100}};

        vec.push_back(ptr); // Compiler Error - copy not allowed.

        vec.push_back(std::move(ptr));

    } // Automatically deleted.

*/

/*

    // More efficient , no calls to new or delete

    std::unique_ptr<int> p1 = make_unique<int>(100);

    std::unique_ptr<Account> p2 = make_unique<Account>("Curly",5000);

    auto p3 = make_unique<Player>("Hero",100,100);

*/