#include <iostream>
#include <vector>

using namespace std;

int main(void){
	
	//continue
	//-no further statements in the body of the loop are executed
	//-control immediately goes directly to the beginning of the loop
	//for the next iteration
	
	//break
	//-no further statements in the body of the loop are executed
	//-loops is immediately terminated
	//-control immediately goes to the statement following the loop construct
	
	//Vector 2-D
	
	/*
	vector<vector<int>> vector_2d{
		{1,2,3},
		{10,20,30,40},
		{100,200,300,400,500}
	};
	
	
	for(auto vec: vector_2d)
	{
		for(auto val:vec)
		{
			cout<<val<<" ";	
		}
		cout<<endl;	
	}
	
	cout<<"\n"<<endl;
	
	for(int num1{1}; num1<=10; num1++)
	{
		for(int num2{1};num2<=10;num2++)
		{
			cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
		}
		cout<<endl;
	}
	
	*/
	
	int num_items{};
	
	
	cout<<"How many data items do you have? : ";
	cin>>num_items;
	
	vector<int>data{};
	int data_item{};
	
	for(int i{1};i<=num_items;i++)
	{
		cout<<"Enter data item-"<<i<<" : ";
		cin>>data_item;
		data.push_back(data_item);
	}
	
	cout<<"\nDisplay Histogram"<<endl;
	
	for(auto val:data)
	{
		for(int i{1};i<=val;i++)
		{
			if(i%5==0)
			{
				cout<<"*";	
			}
			else
			{
				cout<<"-";
			}
		}
		cout<<endl;
	}
	
	int size{};
	
	size=data.size();
	
	cout<<"\nSize : "<<size<<endl;
	
	
	
	
}