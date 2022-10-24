#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void){
	
	
	
	//cout <<scores<<endl;
	//cout <<*scores<<endl;
	
	
	
	//cout<<score_ptr<<endl;
	//cout<<*score_ptr<<endl;
	
	
	//cout<<"\n----------------\n"<<endl;
	/*
	for(int i{0};i<3;i++)
	{
		cout<<score_ptr[i]<<endl;
	}
	
	cout<<"\n----------------\n"<<endl;
	
	//4 bytes of differences between these adresses.
	cout<<score_ptr<<endl;
	cout<<(score_ptr + 1)<<endl;
	cout<<(score_ptr + 2)<<endl;
	
	cout<<"\n----------------\n"<<endl;
	

	*/
	
	int scores[] {100,95,89};
	
	int *score_ptr{scores};
	
	
	cout<<"Value of scores: "<<scores<<endl;
	cout<<"Value of score_ptr: "<<score_ptr<<endl;
	
	
	
	cout<<"\nArray subscript notation -------------"<<endl;
	cout<<scores[0]<<endl;
	cout<<scores[1]<<endl;
	cout<<scores[2]<<endl;
	
	cout<<"\nPointer subscript notation -------------"<<endl;
	cout<<score_ptr[0]<<endl;
	cout<<score_ptr[1]<<endl;
	cout<<score_ptr[2]<<endl;
	
	cout<<"\nPointer subscript notation -------------"<<endl;
	cout<<*score_ptr<<endl;
	cout<<*(score_ptr + 1)<<endl;
	cout<<*(score_ptr + 2)<<endl;
	
	cout<<"\nArray offset notation -------------"<<endl;
	cout<<*scores<<endl;
	cout<<*(scores+1)<<endl;
	cout<<*(scores+2)<<endl;
	
	cout<<endl;
	return 0;
}