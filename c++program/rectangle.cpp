#include<conio.h>
#include<iostream>

using namespace std;

class Rectangle {
	
	private:
		int l ,b, h;
		
	public:
		void input();
		friend void area( Rectangle );
		friend int volume( Rectangle );
};

void Rectangle::input(){
	cout<<"enter lenght "<<endl;
	cin>>l;
	cout<<"enter breadth "<<endl;
	cin>>b;
	cout<<"enter height "<<endl;
	cin>>h;

}

void area (Rectangle r1 ){
	cout<<"area = "<< r1.l * r1.b<<endl;
}

int volume(Rectangle r1 ){
	return r1.l*r1.b*r1.h;
}

int main(){
	
	Rectangle r1;
	
	r1.input();
	area(r1);
	cout<<"volume = "<<volume(r1);
	
	
	getch();
	return 0;
}
