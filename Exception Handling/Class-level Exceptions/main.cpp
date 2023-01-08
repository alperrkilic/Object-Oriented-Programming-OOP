#include <iostream>

int main(void)
{
    return 0;
}

/*
    Method:
        these work the same way as they do for functions as we've seen.

    Constructor:
        Constructors may fail. // allocating memory with constructor or trying to open a file but file does not exist
        Constructors do not return any value.
        Throw an exception in the constructor if you cannot initialize an object.

    Destructor:
        Do not throw exceptions from your destructor


    //ACCOUNT CONSTRUCTOR:

    Account::Account(std::string name,double balance)
        : name{name},balance{balance}
        {
            if(balance < 0.0)
            {
                throw IllegalBalanceException{};
            }
        }

    try
    {
        std::unique_ptr<Account> moe_account = std::make_unique<Checking_account>("Moe",-10.0);
        std::cout << *moe_account<<std::endl;
    }
    catch(const IllegalBalanceException &ex)
    {
        std::cerr <<"Couldn't create account"<<std::endl;
    }

*/