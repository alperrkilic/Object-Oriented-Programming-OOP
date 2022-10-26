#include <iostream>

using namespace std;

int *create_array(size_t size,int init_value=0){
	
	int *new_storage{nullptr};
	new_storage = new int[size];
	
	for(size_t i{0};i<size;++i)
	{
		*(new_storage+i) = init_value;
	}

	//*(new_storage+i) //adding to its address
	//as a result the pointer points the second
	//element of the array until its size
	//which is determined in main by user and have
	//been sent to the *create_array function
	//function returns a pointer that is in integer type
	
	cout<<endl;
	
	return new_storage;
	
}

void display(const int *const array,size_t size){
	
	for(size_t i{0};i<size;++i)
	{
		cout<<array[i]<<" ";
	}
	
	cout<<endl;
	
}

int main(void){
	
	int *my_array{nullptr};
	size_t size;
	int init_value{0};
	
	cout<<"\nHow many integers would you like to allocate? ";
	cin>>size;
	cout<<"What value would you like them initialized to? ";
	cin>>init_value;
	
	
	my_array = create_array(size,init_value);
	
	cout<<"\n----------------------------"<<endl;
	
	display(my_array,size);
	
	delete[] my_array;
	
	
	return 0;
}

/*
	Heap: 5000 
			2 2 2 2 .... 2
			
			
	stack:
	
	create_array(10,2):
	init_value 2
	size 10
	
	main:
	init value 2
	size 10
	my_array (5000)
	
	
	------------------
	
	after function create_array is terminated,
	in order to keep the address of the array in heap new_storage
	should be returned and assigned to my_array
	in the main. After function is terminated
	values are deleted
	
*/