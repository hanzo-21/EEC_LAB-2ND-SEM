#include<conio.h>
#include<iostream>

using namespace std;

int input(){
	
	getchar();
	
	return getchar()-48;
}

int main(){
	
	input()>input()? cout<<"a is greatest" : cout<<"b is greatest"<<endl;
	
	
	return 0;
}
