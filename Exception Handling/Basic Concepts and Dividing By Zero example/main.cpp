#include <iostream>

int main(void)
{

    int miles{};
    int gallons{};

    double miles_per_gallon{};

    std::cout << "Enter the miles driven: ";
    std::cin >> miles;

    std::cout << "Enter the gallons used: ";
    std::cin >> gallons;

    try
    {
        if (gallons == 0)
        {
            throw 0;
        }
        else
        {
            miles_per_gallon = static_cast<double>(miles) / gallons;
            std::cout << "Result: " << miles_per_gallon << std::endl;
        }
    }
    catch (int &ex)
    {
        std::cout << "Sorry you cant divide by zero" << std::endl;
    }

    std::cout << "Bye" << std::endl;

    return 0;
}

/*
    Exception handling:
        Dealing with extraordinary situations
        Indicates that an extraordinary situation has been detected or has occurred.
        Program can deal with the extraordinary situations in a suitable manner.

    What causes exceptions
        Insufficient resources // out of memory no storage etc
        Missing resources // file does not exist
        Invalid operations
        Range violations
        Underflows and overflows
        Illegal data and many others

    Exception Safe
        when your code handles exceptions


    Terminology:
        Exception
            an object or primitive type that signals that an error has occurred.
        Throwing an exception:
            your code detects that an error has occurred or will occur.
            the place where the error occurred may not know how to handle the error
            code that can throw an exception describing the error to another part of the program that knows how to handle the error
        Catching an exception -> handling the exception
            code that handles the exception
            may or may not cause the program to terminate

    C++ syntax:
        throw
            throws an exception
            followed by an argument

        try {code that may throw an exception}
            you place code that may throw an exception in a try block
            if the code throws an exception, the try block is exited.
            the thrown exception is handled by a catch handler
            if no catch handler exists the program terminates

        catch (exception ex) { code to handle the exception}
            code that handles the exception
            can have multiple catch handlers
            may or may not cause the program to terminate
*/