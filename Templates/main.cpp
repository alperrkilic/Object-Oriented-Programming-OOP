#include <iostream>
#include <string>

using namespace std;

template <typename T>
void swap_(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}

template <class T>
class myClass
{
public:
    T data;
    myClass(T data) : data(data)
    {
        cout << "Template class constructor" << std::endl;
    }
    ~myClass()
    {
        cout << "Template class destructor" << std::endl;
    }
};

int main(void)
{

    char A{'A'};
    char B{'B'};

    cout << "Before : " << A << " , " << B << endl;

    swap_(A, B);

    cout << "After : " << A << " , " << B << endl;

    cout << "Template class " << std::endl;

    myClass<int> c(10);
    cout << "c.data: " << c.data << std::endl;

    /*
        With template classes we are preventing to change data types all the time. The code will work for all data types all we have to do is
        Declaring which type will it be. Above you can see that myClass<int> c(10); with that statement I am declaring the type of template
        object with <int>
    */

    myClass<string> str("This is a test string");
    cout << str.data << std::endl;

    return 0;
}