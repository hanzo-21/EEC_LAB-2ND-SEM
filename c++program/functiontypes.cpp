#include<conio.h>
#include<iostream>

using namespace std;

class Addition{
	
	private:
		int a , b;
	
	public:
		void input();
		int sendA();
		int sendB();
		void sum1 ();
		int sum2 ();
		void sum3 (int x, int y);
		int sum4 (int x , int y);
	
};

void Addition::input(){
	cout<<"enter a"<<endl;
	cin>>a;
	cout<<"enter b"<<endl;
	cin>>b;
}


//function with no argument and no return types 
void Addition::sum1(){
	cout<<"sum = "<<a+b<<endl;
}

//function with no argument and return types
int Addition::sum2(){	
	return a + b;
}

//function with no argument and  return types
void Addition::sum3(int x, int y){
	cout<<"sum = "<<x+y<<endl;	
}

//function with argument and return types 
int Addition::sum4(int x , int y){
	return x + y;
}


//used send function to pass private data as an argument to sum function from main 
int Addition::sendA(){
	return a;
}

int Addition::sendB(){
	return b;
}


int main(){
	
	Addition a;
	
	a.input();
	a.sum1();
	cout<<"sum = "<<a.sum2()<<endl;
	a.sum3( a.sendA(),a.sendB());
	cout<<"sum = "<<a.sum4( a.sendA(),a.sendB());
	
	getch();
	return 0;
	
}
