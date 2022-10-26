#include <iostream>
#include <string>
#include <vector>

using namespace std;

void swap(int *a,int *b){
	
	int temp = *a;
	*a=*b;
	*b=temp;
}

int main(void){
	
	int x{100},y{200};
	
	cout<<"\nx: "<<x<<endl;
	cout<<"y: "<<y<<endl;
	
	swap(&x,&y);
	
	
	cout<<"\nx: "<<x<<endl;
	cout<<"y: "<<y<<endl;
	
	
}

/*
	stack:
				temp
				b	2000
swap(1000,2000)	a	1000
				------------
				2000	y:200 -->100
				1000	x:100 -->200
*/