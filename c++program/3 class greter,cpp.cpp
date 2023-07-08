/*
create 3 classes (classA, classB, classC) 
with each class having an input function 
and finally find the maximum number amoung 
all three classes using friend funciton 
*/

#include <iostream>
#include <conio.h>

using namespace std;

class ClassC;
class ClassB;

class ClassA {
	
	private:
		int num;
	
	public:
		void input();
		friend ClassC;
	
};

class ClassB {
	
	private:
		int num;
	
	public:
		void input();
		friend ClassC;
	
};

class ClassC {
	
	private:
		int num;
	
	public:
		void input();
		int max (ClassA , ClassB);	
};


void ClassA::input(){
	cout<<"enter number "<<endl;
	cin>>num;
}

void ClassB::input(){
	cout<<"enter number "<<endl;
	cin>>num;
}

void ClassC::input(){
	cout<<"enter number "<<endl;
	cin>>num;
}

int ClassC::max( ClassA c1, ClassB c2 ){
	
	if (c1.num > c2.num && c1.num> num )
		return c1.num;
	else if (c2.num > c1.num && c2.num> num )
		return c2.num;
	else 
		return num;

}


int main (){
	
	ClassA c1;
	ClassB c2;
	ClassC c3;
	
	c1.input();
	c2.input();
	c3.input();
	
	cout<<"max number = "<< c3.max( c1 , c2);
	
	
	getch();
	return 0;
}
