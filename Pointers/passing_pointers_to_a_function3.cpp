#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(const vector <string> *const v){
	
	//(*v).at(0) ="Funny"; does not work since 
	//vector is a const
	
	for(auto str: *v)
	{
		cout<<str<<" ";	
	}
	
	//v=nullptr; does not work when *v is *const v
	//because constant variables does not change	
	cout<<endl;
}

void display(int *array,int sentinel){
	
	while(*array != sentinel)
	{
		cout<<*array++<<" ";
		//what we increment here is the address
		//of the first element of the array
		//after this increment *array pointer now
		//points the second element of the array
	}	
	
	cout<<endl;
	
}

int main(void){
	
	
//	cout<<"\n------------------------"<<endl;
//	vector <string> stooges{"Larry","Moe","Curly"};
//	display(&stooges);
	
	
	cout<<"\n------------------------"<<endl;
	
	int scores[] {100,98,97,79,85,-1};
	display(scores,-1);
		
	cout<<endl;
	return 0;
	
}