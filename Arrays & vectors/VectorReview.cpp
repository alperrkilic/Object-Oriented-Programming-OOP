#include <iostream>
#include <vector>

using namespace std;

int main(void){
	
	vector<int> numbers;
	
	int i{0};
	int n;
	
	cout<<"Please enter n: ";
	cin >> n;
	
	for(i=0;i<n;i++)
	{
		numbers.push_back(i);
	}
	
	int size=0;
	size=numbers.size(); // .size() gives the size of the vector
	cout<<"\nSize is: "<<size<<endl;
	
	
	    if (numbers.empty() == false)
        	cout << "\nVector is not empty";
    	else
       		cout << "\nVector is empty";
 
	/*
		.push_back() function:
		vectorname.push_back(value);
		it push the elements into a vector from the back
		
		
		.pop_back() function:
		vectorname.pop_back();
		function is used to pop or remove elements from a vector from the back
	
		
		.at() function:
		numbers.at(3); gives the value at third index.		
	
		
		insert() function:
		vector_name.insert(vector_name.begin() + index,100);
		adds the value 100 to index after beginning of the vector
	
		
		clear() function:
		vector_name.clear() --> it is used to remove all the elements of the vector container
	
		
	*/
}