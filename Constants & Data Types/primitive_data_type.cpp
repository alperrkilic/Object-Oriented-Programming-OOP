#include <iostream>

using namespace std;

int main(void)
{
	
	/* --> all of them are signed integers
		shot int --> at least 16 bits
		int --> at least 16 bits
		long int --> at least 32 bits
		long long int --> at least 64 bits
	
	*/
	
	unsigned short int exam_score{55};
	cout << "My exam score was " << exam_score <<endl;
	
	int countries_represented{65};
	cout << "There were " << countries_represented << " countries represented in my meeting."<<endl;
	
	long people_in_florida{20610000};
	cout << "There are about " << people_in_florida << " people in florida"<<endl;
	
	
	long long people_in_earth{7600000000};
	cout << "There are about " << people_in_earth << " people in earth"<<endl;
	
	/*Boolean type --> true or false  --> 1 or 0 */
	
	bool game_over(false);
	
	cout << "The value of gameOver is " << game_over << endl;
	
	
	short value1{30000};
	short value2{1000};
	
	long product{value1*value2};
	
	cout << "The product of "<< value1 << " and " << value2 << " is "<< product<<endl;
	
}