/*
wap using calss rectangle to input the length  breadth height  and clalulate the 
area,  volume  of rectangle using seperate friend function;
*/

#include<conio.h>
#include<iostream>

using namespace std;

class Rectangle {
	
	private:
		int l ,b, h;
		
		
	public:
		void input ();
		friend void vloume(Rectangle r );
		friend void area (Rectangle );
		 
	
};

void Rectangle::input(){
	
	cout <<"enter lenght "<<endl;
	cin>>l;
	cout <<"enter breadth "<<endl;
	cin>>b;
	cout <<"enter height "<<endl;
	cin>>h;
	
}

void vloume(Rectangle r){
	
	cout<<"vloume = "<<r.l*r.b*r.h<<endl;
	
	
}

void area (Rectangle r){
	
		cout<<"area = "<<r.l*r.b<<endl;

}

int main(){
	
	Rectangle r;
	
	r.input();
	
	vloume(r);
	
	area (r);
	
	getch();
	return 0;
}

