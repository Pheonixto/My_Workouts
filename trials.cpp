#include<iostream>

using namespace std;

//Writing a C++ Program to Convert Characters
//of a string into opposite case

void convertOpposite(string &str){
	
	int len=str.length();
	
	//conversion of characters according to ASCII values
	
	for(int i=0; i<len; i++){
		
		if(str[i]>='a' && str[i]<='z'){
			//convert lowercase to uppercase
			str[i]=str[i]-32;
		}
		else if(str[i]>='A' && str[i]<='Z'){
			//convert uppercase to lowercase
			str[i]=str[i]+32;
		}
	}
	
}

// riving function

int main(){
	
	string str ="AuGusTinE kwAdwO BoaMaH";
	
	//Calling function
	convertOpposite(str);
	
	cout<<str<<endl;
	
	return 0;
}
