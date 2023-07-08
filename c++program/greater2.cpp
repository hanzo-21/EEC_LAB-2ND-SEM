/*
using class wap to input two numbers and 
display the greatest number.
*/

#include<conio.h>
#include<iostream>
#include<cstdlib>

using namespace std;

class Great{
	
	private:
		int a,b,temp;
	
	public:
		void input();
		void calculate();
		void display();
	
	
};

void Great::input(){
	
	cout<<"enter two numbers"<<endl;
	cin>>a>>b;
}

void Great::calculate(){
	if (a>b)
		temp=0;
}

void Great::display(){
	
	if (temp==0)
		cout<<a<<" is the greater";
	else
		cout<<b<<" is the greater";
}

int main(){
	
	Great g;
	
	g.input();
	g.calculate();
	g.display();
	
	
	
	getch();
	return 0;
}
