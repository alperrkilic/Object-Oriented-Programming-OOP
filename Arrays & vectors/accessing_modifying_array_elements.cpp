#include <iostream>

using namespace std;

int main(void)
{
	
	int test_scores[5] {100,95,99,87,88};
	
	
	cout<<"First score at index 0: " <<test_scores[0] <<endl;
	cout<<"second score at index 1: " <<test_scores[1] <<endl;
	cout<<"third score at index 2: " <<test_scores[2] <<endl;
	cout<<"fourth score at index 3: " <<test_scores[3] <<endl;
	cout<<"fifth score at index 4: " <<test_scores[4] <<endl;
	

	cout<<"================================="<<endl;

	int i=0;

	for(i=0;i<=4;i++)
	{
		cout<<"score at index " <<i<< ": "<<test_scores[i]<<endl;
	}


}