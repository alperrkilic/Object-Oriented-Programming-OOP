#pragma once
#include "Account.h"

//Account here is the base class that we are deriving from
class Savings_Account: public Account{
    public:
    double int_rate;
    Savings_Account();
    ~Savings_Account();
    void deposit(double amount);
    void withdraw(double amount);
};