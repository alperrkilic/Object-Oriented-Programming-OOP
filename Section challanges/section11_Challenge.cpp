#include <iostream>
#include <vector>

using namespace std;

//prototypes for displaying menu and getting user selection
void display_menu();
char get_selection();



//Menu handling function prototypes

//for handle add I'm not sending it with const value since 
//I want to add one new element to my vector that's because
//I'm just passing it with pass by referrence (&v) and changing it
void handle_display(const vector <int> &v);
void handle_add(vector<int> &v);
void handle_mean(const vector <int> &v);
void handle_smallest(const vector <int> &v);
void handle_largest(const vector <int> &v);
void handle_find(const vector <int> &v);
void handle_quit();
void handle_unknown();

//Prototypes for functions that work with the list
//to display it calculate mean etc.
void display_list(const vector <int> &v);
double calculate_mean(const vector <int> &v);
int get_smallest(const vector <int> &v);
int get_largest(const vector <int> &v);
bool find(const vector<int> &v, int target);

int main(void){
	
	vector <int> numbers;
	char selection{};
	
	do{
		display_menu();
		selection=get_selection();
		
		switch(selection)
		{
			case'P':
				handle_display(numbers);
				break;
			case'A':
				handle_add(numbers);
				break;
			case'M':
				handle_mean(numbers);
				break;
			case'S':
				handle_smallest(numbers);
				break;
			case'L':
				handle_largest(numbers);
				break;
			case'F':
				handle_find(numbers);
				break;
			case'Q':
				handle_quit();
				break;
			default:
				handle_unknown();
		}
		
	}while(selection!='Q');
		
}

void display_menu(void){
	cout<<"\nP - Print numbers"<<endl;
	cout<<"A - Add a number"<<endl;
	cout<<"M - Display mean of the numbers"<<endl;
	cout<<"S- Display the smallest number"<<endl;
	cout<<"L - Display the largest number"<<endl;
	cout<<"F - Find a number"<<endl;
	cout<<"Q - Quit"<<endl;
	cout<<"Enter your choice: ";
}

char get_selection(){
	
	char selection{};
	cin>>selection;
	return toupper(selection);
}

void handle_display(const vector<int> &v){
	if(v.size()==0)
	{
		cout<<"[] - the list is empty"<<endl;
	}
	else
	{
		display_list(v);
	}
	
}

void display_list(const vector <int> &v){
	
	cout<<"[ ";
	
	for(auto num:v)
	{
		cout<<num<<" ";
	}
	
	cout<<" ]"<<endl;
	
}

void handle_add(vector<int> &v){ //I'm passing vector by referrence
	
	int num_to_add{};
	
	cout<<"Enter an integer to add to the list: ";
	cin>>num_to_add;
	
	v.push_back(num_to_add);
	cout<<num_to_add<<" added to the list."<<endl;
	
}

void handle_mean(const vector <int> &v)
{
	if(v.size()==0)
	{
		cout<<"Unable to calculate mean - list is empty"<<endl;
	}
	else
	{
		cout<<"The mean is: "<<calculate_mean(v)<<endl;
	}
	
}

double calculate_mean(const vector <int> &v){
	
	int total{};
	
	for(auto num:v)
	{
		total=total+num;	
	}
	
	return static_cast <double>(total)/v.size();
	
}

void handle_quit(){
	cout<<" Goodbye "<<endl;
}

void handle_unknown(){
	cout<<" Unknown selection - try again "<<endl;
	
}

void handle_find(const vector <int> &v){
	int target{0};
	
	cout<<"Enter the number to find: ";
	cin>>target;
	
	if(find(v,target))
	{
		cout<< target <<" was found."<<endl;
	}
	else
	{
		cout<< target <<" was not found."<<endl;
	}
	
}

bool find(const vector<int> &v, int target){
	
	for(auto num:v)
	{
		if(num==target)
		{
			return true;
		}
	}
	
	return false;
	
}


void handle_smallest(const vector <int> &v){
	
	
	if(v.size()==0)
	{
		cout<<"[] - The list is empty"<<endl;
	}
	else
	{
		cout<<"The smallest number is: "<<get_smallest(v)<<endl;
	}
	
}

int get_smallest(const vector<int> &v){
	
	int smallest=v.at(0);
	
	for(auto num:v)
	{
		if(num<smallest)
		{
			smallest=num;
		}
	}
	
	return smallest;
	
}

void handle_largest(const vector <int> &v){
	
	if(v.size()==0)
	{
		cout<<"[] - The list is empty"<<endl;
	}
	else
	{
		cout<<"The largest number is: "<<get_largest(v)<<endl;
	}
	
	
}

int get_largest(const vector <int> &v){
	
	int largest=v.at(0);
	
	for(auto num:v)
	{
		if(num>largest)
		{
			largest=num;
		}
	}
	
	return largest;
	
	
}