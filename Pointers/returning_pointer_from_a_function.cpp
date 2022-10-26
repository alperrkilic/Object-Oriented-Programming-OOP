#include <iostream>

using namespace std;

//Returning a parameter:

int *largest_int(int *int_ptr1, int *int_ptr2){
	
	if(*int_ptr1 > *int_ptr2)
	{
		return int_ptr1;
	}
	else
	{
		return int_ptr2;
	}
		
}

//Returning dynamically allocated memory
int *create_array(size_t size,int init_value=0){
	//default init value is 0
	int *new_storage{nullptr};
		
	new_storage=new int[size];	
	
	for(size_t i {0};i<size;++i)
	{
		*(new_storage + i) = init_value;
	}
	
	/*
		main for that function:
		int main(void){
		
			int *my_array //will be allocated by the function
			my_array = create_array(100,20);
			
			delete [] my_array;
			return 0;
		}
	*/
	return new_storage;
}

int main(void){
	
	/*
	int a{100};
	int b{200};
	
	int *largest_ptr{nullptr};
	
	largest_ptr = largest_int(&a,&b);
	
	cout<<*largest_ptr<<endl;
	*/
	
	return 0;
	
}