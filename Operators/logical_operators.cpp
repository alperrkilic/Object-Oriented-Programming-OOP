#include <iostream>

using namespace std;

int main(void){
	
	int num{};
	const int lower{10};
	const int upper{20};
	
	cout<<boolalpha;
	
	//Determine if an entered integer is between two other integers.
	//assume lower < upper
	
	cout<<"Enter an integer - th bounds are "<<lower<<" and "<<upper<<" : ";
	cin>>num;
	
	bool within_bounds{false};
	
	within_bounds=(num>lower && num<upper);
	cout<<num<<" is between "<<lower<< " and "<<upper<<" : "<<within_bounds<<endl;
		
}