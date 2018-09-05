#include <iostream>

using namespace std;

//Write a c++ program to calculate the products of an array


int main() {
	int MyArray[]={1,2,3,4,5,6};
	
	int n=5;
	
	int product=1;
	
	int a;
	
	for(a=0; a<=n; a++){
		
		product=product*MyArray[a];
	}
	cout<<"The Product of the Array is "<<product<<endl;
	return 0;
}
