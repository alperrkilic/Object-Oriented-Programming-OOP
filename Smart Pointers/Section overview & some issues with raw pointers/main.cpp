#include <iostream>

using namespace std;

int main(void)
{

    return 0;
}

/*
    Unique Pointer:
    Shared Pointers:
    Weak Pointers:


    Issues with Raw Pointers:
        C++ provides absolute flexibility with memory management
            *Allocation
            *Deallocation
            * Lifetime Management

        Some Potentially serious problems:
            *Uninitialized (wild) pointers
            *Memory leaks
            *Dangling Pointers
            * Not exception safe

        Ownership?
            *Who owns the pointer
            *When should a pointer be deleted?

    Smart Pointers:
        What are they ?

        *Objects
        *Can only point to heap-allocated memory
        *Automatically call delete when no longer needed
        *Adhere to RAII principles
        *C++ smart pointers:
            -Unique Pointers (unique_ptr)
            -Shared Pointers (shared_ptr)
            -Weak Pointers (weak_ptr)
            -Auto Pointers (auto_ptr) -> Deprecated won't be seen in the course

*/
/*
    #include <memory>

    Defined by class templates
        *wrapper around a raw pointer
        *Overloaded operators
            -Dereference(*)
            -Member Selection (->)
            -Pointer arithmetic not supported(++,--,etc.)
        *Can have custom deleter

    RAII - Resource Acquisition is initialization

    Resource Acquisition:
        *Open a file
        *Allocate memory
        *Acquire a lock

    Is initialization:
        *The resource is acquired in a constructor

    Resource relinquishing:
        *Happens in the destructor
            *Close the file
            *Deallocate the memory
            *Release the lock

*/