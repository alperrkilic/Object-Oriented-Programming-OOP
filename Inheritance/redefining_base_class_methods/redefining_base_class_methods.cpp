#include <iostream>

class Account
{
	friend std::ostream &operator<<(std::ostream &os, const Account &account);

protected:
	double balance;

public:
	Account();
	Account(double balance);
	void deposit(double amount);
	void withdraw(double amount);
};

Account::Account() : Account(0.0)
{

	// delegating constructor
}

Account::Account(double balance) : balance{balance}
{
}

void Account::deposit(double amount)
{
	balance += amount;
}

void Account::withdraw(double amount)
{
	if (balance - amount >= 0)
	{
		balance -= amount;
	}
	else
	{
		std::cout << "Insufficient funds" << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, const Account &account)
{
	os << "Account balance: " << account.balance;
	return os;
}

class Savings_Account : public Account
{
	friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);

protected:
	double int_rate;

public:
	Savings_Account();
	Savings_Account(double balance, double int_rate);
	void deposit(double amount);
	// withdraw is inherited
};

Savings_Account::Savings_Account() : Savings_Account{0.0, 0.0}
{
}

Savings_Account::Savings_Account(double balance, double int_rate) : Account{balance}, int_rate{int_rate}
{
}

void Savings_Account::deposit(double amount)
{
	amount = amount + (amount * int_rate / 100);
	Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &account)
{
	os << "Savings account balance: " << account.balance << std::endl;
	os << "Interest rate: " << account.int_rate << std::endl;
	return os;
}

int main(void)
{
	std::cout << "Account class : " << std::endl;

	Account a1{1000.0};
	std::cout << a1 << std::endl;

	a1.deposit(500.0);
	std::cout << a1 << std::endl;

	a1.withdraw(1000);
	std::cout << a1 << std::endl;

	a1.withdraw(5000.0);
	std::cout << a1 << std::endl;

	std::cout << "Savings_Account class : " << std::endl;

	Savings_Account s1{1000, 5.0};

	std::cout << s1 << std::endl;

	s1.deposit(1000);
	std::cout << s1 << std::endl;

	s1.withdraw(2000);
	std::cout << s1 << std::endl;

	s1.withdraw(1000);
	std::cout << s1 << std::endl;

	return 0;
}

/*
	binding:

	Base b;
	b.deposit (1000.0); //Base::deposit

	Derived d;
	d.deposit (1000.0); //Derived::deposit

	Base *ptr = new Derived();
	ptr->deposit(1000.0); // Base::deposit ???????
*/