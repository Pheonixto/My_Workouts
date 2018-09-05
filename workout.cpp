#include <iostream>

using namespace std;

/* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
 The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000 */

int main() {
	
	int a;
	int sum=0;
	
	for(a=999; a>=0; a--){
		
		if(a%3==0 || a%5==0)
		{
				sum=sum+a;
		}
		
	}
	
	cout<<"sum of multiples of 3 or 5 is " <<sum<<endl;
	
	
	return 0;
}
