#include<conio.h>
#include<iostream>

using namespace std;

class Area{
	
	private:
		int l,b;
		
	public:
		void input();
		void sumArea( Area, Area);
		void display();
};

void Area::input(){
	
	cout<<"enter length and breadth "<<endl;
	cin>>l>>b;
	
}

void Area::sumArea(Area a1, Area a2){
	
	l = a1.l * a1.b + a2.l * a2.b;
	
}

void Area::display(){
	cout<<" sum of area = "<<l<<" m sqr ";
}

int main(){
	
	Area a1 ,a2 ,a3;
	
	a1.input();
	a2.input();
	
	a3.sumArea(a1, a2 );
	
	a3.display();
	
	
	getch();
	return 0;
}
