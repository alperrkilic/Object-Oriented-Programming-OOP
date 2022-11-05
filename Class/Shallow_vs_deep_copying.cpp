#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void){
	
	
	
	
}
/*
	Shallow copy:
	-The dafault behavior provided by the compiler.
	
	-Memberwise copy
	-Each data member is copied from the source object.
	-The pointer is copied not what it points to
	
	-Problem: When we release the storage in the destructor the other object
	still refers to the released storage!!
*/
/*
	Shallow:
	
	class Shallow{
		private:
			int *data; //Pointer
		public:
			Shallow(int d); //Constructor
			Shallow(const Shallow &source); //Copy
		Constructor
			~Shallow(); //Destructor
	};
	
	//Since w e allocated this storage dynamically
	//Then we must be sure to release it in the destructor.
	Shallow::Shallow(int d){
		data = new int; //allocate storage
		*data = d;
	}
	
	~Shallow::Shallow(){
		delete data; //free storage
		cout<<"Destructor freeing data"<<endl;
	}
	
	Copy Constructor
	Shallow::Shallow(const Shallow &source)
		:data(source.data){
		cout<<"Copy-constructor - Shallow"<<endl;	
	}
	
	
	Sample main - will likely crash
	
	int main(){
	Shallow obj1{100};
	display_shallow{obj1};
	//obj1's data has been released!
	
	obj1.set_data_value(1000);
	Shallow obj2{obj1};
	cout<<"Hello world"<<endl;
	return 0;
	}
	
	
*/