#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(void)
{
	
	//	int scores[] {10,20,30};
	//
	//	for(auto score:scores)
	//	{
	//		cout<<score<<endl;
	//	}
	//
	//compiler is figuring out the type when we say auto


	vector<double>temperatures{87.9,77.9,80.0,72.5};
	double average_temp{};
	double total{};
	
	
	for(auto temp:temperatures)
	{
		total+=temp;
	}
	
	if(temperatures.size() !=0)
	{
		average_temp=total/temperatures.size();
	}

	
	//#include <iomanip> cout<<fixed<<setprecision(i);
	//it rounds the value after i'th element right side of the comma.

	cout<<fixed<<setprecision(2);	
	cout<<"Average temperature is "<<average_temp<<endl;
	
	
}