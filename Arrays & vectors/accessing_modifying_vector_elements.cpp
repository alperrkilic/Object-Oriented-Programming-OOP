#include <vector>
#include <iostream>

using namespace std;

int main(void)
{
	
	/*
	vector <int> test_scores {100,95,99,87,88};
	
	
	//Changing the contents of vector elements-vector syntax
	//test_scores.at(index);
	
	cout <<"score at index 0: "<<test_scores.at(0)<<endl;
	cout <<"score at index 1: "<<test_scores.at(1)<<endl;
	cout <<"score at index 2: "<<test_scores.at(2)<<endl;
	cout <<"score at index 3: "<<test_scores.at(3)<<endl;
	cout <<"score at index 4: "<<test_scores.at(4)<<endl;
	
	
	test_scores.at(0)=90;
	
	*/
	
	//When do they grow as needed?
	
	//vector_name.push_back(element)
	
	vector <int> test_scores {100,95,99};
	
	test_scores.push_back(80);
	test_scores.push_back(90);
	
	cout<<"score at index 3 is: "<<test_scores.at(3)<<endl;
	cout<<"score at index 4 is: "<<test_scores.at(4)<<endl;


	cout <<"\nThere are " <<test_scores.size()<<" scores in the vector" <<endl;
	
	//finds number of elements in the vector
	//vector_name.size()
	
	int score_to_add{0}; // setting value of score_to_add to 0 at the beginning. 
	
	cout<<"Enter a test score to add to the vector: ";
	cin >> score_to_add;//inputting the value
	
	
	test_scores.push_back(score_to_add);
	//and then pushing the value to the end of the vector
	
	cout<<"\nTest scores are now:"<<endl;
	
	int i{0};
	
	for(i=0;i<test_scores.size();i++)
	{
		cout<<test_scores.at(i)<<endl;
	}
	
	//since there are five elements at the beginning
	//after adding one more element we get the size of 6.
	//so index should be starting from 0 going upto 6 
	//and 6 is not included.

	//vector_name.size() is equivalent of sizeof(array)/variable type in #C programming language.


	
}