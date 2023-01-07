#include <iostream>

void func_c()
{
    std::cout << "Starting func_c " << std::endl;
    throw 100;
    std::cout << "Ending func_c" << std::endl;
}

void func_b()
{
    std::cout << "Starting func_b " << std::endl;

    try
    {
        func_c();
    }
    catch (int &ex)
    {
        std::cerr << "Error caught in func_b" << std::endl;
    }

    std::cout << "Ending func_b" << std::endl;
}

void func_a()
{
    std::cout << "Starting func_a " << std::endl;
    func_b();
    std::cout << "Ending func_a" << std::endl;
}

int main(void)
{
    std::cout << "Starting main" << std::endl;

    try
    {
        func_a();
    }
    catch (int &ex)
    {
        std::cerr << "Error caught in main" << std::endl;
    }

    std::cout << "Ending main" << std::endl;

    return 0;
}

/*
    If we get to the main function and the exception isn't handled there either
    then the program terminates since the exception was not handled.

    When a function is removed or popped from the stack, all of its local variables are destroyed including the object
    For local objects their destructors will be called and if we have to free memory with delete then these statements may not execute
    at all and we leak memory

    In this example, since we don't have catch handlers in functions we won't see Ending of the functions.
    Since function b and function a does not have catch handlers they will be popped out of the stack. and they won't execute.
    Since these functions are ripped of from the stack all of their local variables were destroyed and destructors were called if any.


    But in the updated version if we have a try catch block in function_b once error is thrown function c won't be terminated and
    it will be checked in function_b if there's an exception handler try catch block, and error will be caught in function_b. Because of that
    only function_c won't be terminated while other functions (a,b) will be terminated perfectly.


*/