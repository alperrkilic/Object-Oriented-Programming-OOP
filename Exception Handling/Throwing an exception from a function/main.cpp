#include <iostream>

double calculate_mpg(int miles, int gallons)
{
    if (gallons == 0)
    {
        throw 0;
    }

    return static_cast<double>(miles) / gallons;
}

int main(void)
{

    int miles{};
    int gallons{};
    double miles_per_gallon{};

    std::cout << "Enter the miles: ";
    std::cin >> miles;

    std::cout << "Enter the gallons: ";
    std::cin >> gallons;

    try
    {
        miles_per_gallon = calculate_mpg(miles, gallons);
        std::cout << "Result: " << miles_per_gallon << std::endl;
    }
    catch (int &ex)
    {
        std::cerr << "You cannot divide by zero." << std::endl;
    }

    std::cout << "Bye" << std::endl;

    return 0;
}

/*
    What do we return if total is zero ?

    double calculate_avg(int sum,int total)
    {
        return static_cast<double>(sum)/total;
    }

    How to handle: if we throw the exception, the division will not happen and the function will terminate.


    double calculate_avg(int sum,int total)
    {
        if(total == 0)
        {
            throw 0;
        }

        return static_cast<double>(sum)/total;
    }


    if no exceptions are thrown catch block is skipped
    if an exception is thrown, then the remaining code in the try block is not executed.

    NOTE: Best practice is to throw by value and catch by reference

*/