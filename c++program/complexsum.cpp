#include<conio.h>
#include<iostream>

using namespace std;

class Complex{
	
	private:
		int r,i;
		
	public:
		void input();
		void sumComplex( Complex , Complex);
		void display();
};

void Complex::input(){
	
	cout<<"enter real number"<<endl;
	cin>>r;
	cout<<"enter imaginary number"<<endl;
	cin>>i;
}

void Complex::sumComplex(Complex c1, Complex c2){
	
	r= c1.r + c2.r;
	i= c1.i + c2.i;
}

void Complex::display(){
	cout<<" sum of 2 complex number is  "<<r << " + i "<<i;
}

int main(){
	
	Complex c1 ,c2 ,c3;
	
	c1.input();
	c2.input();
	
	c3.sumComplex(c1, c2 );
	
	c3.display();
	
	
	getch();
	return 0;
}
