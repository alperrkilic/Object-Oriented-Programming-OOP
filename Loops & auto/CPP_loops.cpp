#include <iostream>
#include <vector>

using namespace std;

int main(void){
	
	int scores[] {100,90,97};
	
	for(auto score: scores)
	{
		cout<<score<<endl;
	}
	
	
	vector<double> temps {87.2,77.1,80.0,72.5};
	
	double average_temp{};
	double running_sum{};
	
	
	for(auto temp: temps)
	{
		running_sum=running_sum+temp;
	}
	
	average_temp=running_sum / temps.size();
	
	cout<<"\nAverage temp is: "<<average_temp<<endl;
	
	
}