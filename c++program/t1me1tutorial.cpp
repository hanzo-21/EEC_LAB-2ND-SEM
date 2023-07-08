#include<conio.h>
#include<iostream>

using namespace std;

class Time{
	
	private:
		int hour,min;
	
	public:
		void input();
		void addTime(Time ,Time );
		void display();
	
};

void Time::input(){
	
	cout<<"enter hours "<<endl;
	cin>>hour;
	
	cout<<"enter min"<<endl;
	cin>>min;
	
	
}

void Time::addTime(Time t1, Time t2){
		
	min= t1.min + t2.min;
	
	hour= min/60;
	min= min%60;
	hour= hour + t1.hour + t2.hour;
	
	
	
}

void Time::display(){
	
	cout<<"time " << hour<<" hr and "<<min<<"minute"<<endl;	
	
}

int main (){
	
	Time t1, t2,t3;
	
	t1.input();
	t2.input();
	t3.addTime(t1,t2);
		
	cout<<"result = ";
	t3.display();
	
	getch();
	return 0;
}
