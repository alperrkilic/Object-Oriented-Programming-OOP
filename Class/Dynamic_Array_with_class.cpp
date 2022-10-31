#include <iostream>
#include <string>

using namespace std;

class Array{

    private:
        int *arr;
        unsigned int size;
        int first_index;

    public:
        Array();
        Array(unsigned int n,int first_index);

        void size_item();
        ~Array();

        void set_size(unsigned int n);
        void setItem(int index,int data);
        unsigned int getSize();
        int get_item(int index);

};

unsigned int Array::getSize()
{
    return size;
}

int Array::get_item(int index)
{
    if(index>=0 && index<size)
    {
        return arr[index];
    }
}

void Array::setItem(int index,int data)
{
    if(index<size)
    {
        arr[index]=data;
    }
}


Array::Array()
{
    size=10;
    arr=(int*)malloc(sizeof(int)*size);
    //int *a = new int[size]
}

Array::Array(unsigned int n,int first_index)
{

}

Array::~Array()
{
    if(arr)
    {
        free(arr);
    }
}

void Array::set_size(unsigned int n)
{
    if(n<size)
    {
        size=n;
        arr=(int*)realloc(arr,sizeof(int)*n);
    }
}


int main(void){

    Array a1;

    //Array a2(50);

    Array a3(50,20);

    a1.set_size(20);


    return 0;

}