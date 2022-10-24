#include <iostream>

using namespace std;

int main(void){
	
	int *int_ptr{nullptr};
	int_ptr = new int;
	cout<<int_ptr<<endl;
	delete int_ptr;
	
	
	size_t size(0);
	double *temp_ptr {nullptr};
	
	cout<<"How many temps?: ";
	cin>>size;
	
	temp_ptr = new double[size];//new --> allocate double--> type --> how many --> size many
	
	cout<<temp_ptr<<endl;
	
	
	delete [] temp_ptr;
	
	cout<<endl;
	return 0;
}