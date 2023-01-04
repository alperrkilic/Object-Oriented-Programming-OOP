#include <iostream>

int main(void)
{
    return 0;
}

/*
    The final specifier:
        -C++11 provides the final specifier.
        -When used at the class level
            *prevents class from being derived from

        When used at the method level
            *prevents virtual method from being overridden in derived classes.

        Syntax : use final after declaring class

        class My_class final{
            ...
        };

        class Derived final:public Base{
            ...
        };
*/