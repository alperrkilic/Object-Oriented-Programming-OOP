#include <iostream>

using namespace std;

int main(void)
{
	int number_of_room{0};
	const int room_price{30};
	const double tax_rate{6};
	double tax_price;
	
	cout<<"Frank's Carpet Cleaning Service"<<endl;
	cout<<"How many rooms would you like cleaned: ";
	
	cin >> number_of_room;
	
	cout <<"\nEstimate for carpet cleaning service" <<endl;
	cout <<"Number of rooms: " << number_of_room <<endl;
	cout <<"Price per room: $" << room_price <<endl;
	cout <<"Cost: $" <<room_price*number_of_room<<endl;
	
	cout <<"==================================="<<endl;
	
	tax_price = room_price*number_of_room*tax_rate/100;
	cout <<"Total estimate: $" << tax_price + room_price*number_of_room<<endl;
	cout <<"This estimate is valid for 30 days."<<endl;	
	
	
}