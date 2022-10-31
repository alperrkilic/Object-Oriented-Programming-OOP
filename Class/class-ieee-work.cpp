#include <iostream>
#include <string>

using namespace std;

class Vehicle{

    private: 
        string type;
         void Turn(string direction);

    public:

        int capacity;
        void slowdown(double power)
        {

        }

        //Vehicle constructor --> assigns default values for every Vehicle object
        //they can be changed
        Vehicle()
        {
            //cout<<"car object has been created. "<<endl;
            type = "araba";
            capacity=5;
        }

        
        //Destructor
        //It works when the object is being deleted from the memory
        ~Vehicle()
        {
            cout<<"\nbye bye"<<endl;
        }
        
};

void Vehicle::Turn(string direction)
{

}




int main(void)
{
    int a{0};
    Vehicle car1;

    car1.capacity=25;

    cout<<"\n"<<car1.capacity<<endl;

    //cout<<a<<endl; --> prints garbage when a is not initialized


    return 0;


}