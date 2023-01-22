#include <iostream>
#include <memory>

using namespace std;

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

void func(std::shared_ptr<Test> p)
{
    std::cout << "Use count: " << p.use_count() << std::endl;
}

int main(void)
{

    std::shared_ptr<int> p1{new int{100}};
    std::cout << "Use count: " << p1.use_count() << std::endl;

    std::shared_ptr<int> p2{p1};
    std::cout << "Use count: " << p1.use_count() << std::endl;

    p1.reset();

    std::cout << "Use count(p1): " << p1.use_count() << std::endl;
    std::cout << "Use count(p2): " << p2.use_count() << std::endl;

    // Both pointers were pointing the same area on the heap,
    // after reseting p1, now p1 is nullptr but the area that is stored
    // on the heap is still valid so p2 has still access to there
    // With this shared_ptr we are preventing dangling pointer problem
    std::cout << *p2 << std::endl;

    std::cout << "\n------------------------" << std::endl;

    std::shared_ptr<Test> ptr = std::make_shared<Test>(50000);

    func(ptr);

    std::cout << "Use count(ptr): " << ptr.use_count() << std::endl;

    /*
        std::shared_ptr<Account> acc1 = std::make_shared<Trust_Account>("Larry",10000,3.1);
        std::shared_ptr<Account> acc1 = std::make_shared<Checking_Account>("Moe",5000);
        std::shared_ptr<Account> acc1 = std::make_shared<Savings_Account>("Curly",6000);

        std::vector<std::shared_ptr<Account>> accounts;

        accounts.push_back(acc1);
        accounts.push_back(acc2);
        accounts.push_back(acc3);

        for(const auto &acc: accounts)
        {
            std::cout<<*acc<<std::endl;
            std::cout<<"Use count: "<<acc.use_count()<<std::endl;
        }


    */

    return 0;
}

/*
    Shared_ptr --> provides shared ownership of heap objects


    shared_ptr<T>
        *Points to an object of type T on the heap
        *It is not unique, there can be many shared_ptrS pointing to the same object on the heap
        *Establishes shared ownership relationship
        *Can be assigned and copied
        *Can be moved
        *Doesn't support managing arrays by default
        *When the use count is zero, the managed object on the heap is destroyed.

*/

/*

    {
        std::shared_ptr<int> p1 {new int {100}};

        std::cout<<*p1<<std::endl; //100

        *p1 = 200;

        std::cout<<*p1<<std::endl; //200
    }

*/

/*
    UNLIKE unique_ptr, shared pointers can be copied, assigned and moved.


    {
        std::shared_ptr<int> p1 {new int {100}};
        std::cout<<p1.use_count()<<std::endl;

        std::shared_ptr<int> p2 {p1}; //shared ownership
        std::cout <<p1.use_count()<<std::endl;

        p1.reset();

        std::cout<<p1.use_count()<<std::endl;
        std::cout<<p2.use_count()<<std::endl;
    }//automatically deleted
*/

/*
    std::shared_ptr<int> p1 = std::make_shared<int>(100); // use_count() : 1
    std::shared_ptr<int> p2 {p1}; // use_count() : 2
    std::shared_ptr<int> p3;

    p3 = p1; // use_count() : 3

*/