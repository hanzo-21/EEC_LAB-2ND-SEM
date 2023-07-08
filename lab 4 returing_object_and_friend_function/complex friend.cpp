/*
wap to find the sum of 2 complex number using  frined class;
*/
#include<conio.h>
#include<iostream>


using namespace std;

class ComplexB;
class ComplexA{

	private:
		int r,i;

	public:
		void input();
		friend ComplexB;
};

void ComplexA::input(){
	cout<<"enter real number"<<endl;
	cin>>r;
	cout<<"enter imaginary number"<<endl;
	cin>>i;
}

class ComplexB{

	private:
		int r,i;

	public:
		void input();
		void sumOfComplex(ComplexA c1);
};

void ComplexB::input(){
	cout<<"enter real number"<<endl;
	cin>>r;
	cout<<"enter imaginary number"<<endl;
	cin>>i;
}


void ComplexB::sumOfComplex(ComplexA c1){

      cout <<"sum of complex numbers = "<<c1.r+ r;
      cout <<" + i "<<c1.i+ i<<endl;
}


int main(){
	ComplexA c1;
	ComplexB c2;

	c1.input();
	c2.input();

	c2.sumOfComplex(c1);

	getch();
	return 0;
}
