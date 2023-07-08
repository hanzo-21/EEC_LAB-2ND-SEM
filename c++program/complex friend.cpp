#include<conio.h>
#include<iostream>


using namespace std;

class Complex{
	
	private:
		int r,i;
		
	public:
		void input();
		friend Complex add(Complex, Complex);
		void display();
};

void Complex::input(){
	cout<<"enter real number"<<endl;
	cin>>r;
	cout<<"enter imaginary number"<<endl;
	cin>>i;
}

Complex add(Complex c1, Complex c2){
	Complex temp;
	
	temp.r= c1.r+ c2.r;
	temp.i= c1.i+ c2.i;
	
	return temp;
}

void Complex::display(){
	cout<<"sum of comples number = "<< r<<"+ i "<< i<<endl;
}

int main(){
	Complex c1, c2, sum;
	
	c1.input();
	c2.input();
	
	sum = add(c1, c2);
	
	sum.display();
	
	
	getch();
	return 0;
}

