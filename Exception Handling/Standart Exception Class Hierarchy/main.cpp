#include <iostream>

int main(void)
{
    return 0;
}

/*
    C++ provides a class hierarchy of exception classes.
        std::exception is the base class.
        all subclasses implement the what() virtual function
        we can create our own user-defined exception subclasses.

    virtual const char *what() const noexcept;

    class IllegalBalanceException : public std::exception
    {
        public:
            IllegalBalanceException() noexcept = default;
            ~IllegalBalanceException() = default;

            virtual const char* what() const noexcept
            {
                return "Illegal balance exception";
            }
    };


    Account::Account (std::string name, double balance)
        : name{name} , balance{balance}
        {
            if(balance < 0.0)
            {
                throw IllegalBalanceException{};
            }
        }


    try
    {
        std::unique_ptr<Account> moe_account = std::make_unique<Checking_Account>("Moe",-100);
    }
    catch(const IllegalBalanceException &ex)
    {
        std::cerr<<ex.what()<<std::endl;
    }

*/