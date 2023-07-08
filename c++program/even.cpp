/*
WAP to input 5 (using array)numbers and count
the even numbers and display it
*/

#include<conio.h>
#include<iostream>
#include<cstdlib>

using namespace std;

class Even{
	
	private:
		int a[5],evenNum,i;
		
	public:
		void input();
		void countEven();
		void display();
	
	
};

void Even::input(){

	cout<<"enter 5 numbers"<<endl;
	for(i=0;i<5;i++)
		cin>>a[i];
}

void Even::countEven(){
	
	for(i=0,evenNum=0;i<5;i++){
		if (a[i]%2==0)
			++evenNum;
	}
	
	
	
}

void Even::display(){
	
	cout<<"number of even number = "<<evenNum;		
}

int main(){
	
	Even e;
	
	e.input();
	e.countEven();
	e.display();
	
	getch();
	return 0;
}
