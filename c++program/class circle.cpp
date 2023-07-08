/* create class Circle which has radius , area
circum and creat necessary function to 
calculate and display area and circumference
*/
#include<conio.h>
#include<iostream>
#define pi 3.1415

using namespace std;

class Circle{
	
	private:
		int rad;
		float area, circum;
		
	public:
		void inputRadius();
		void claculateArea();
		void displayArea();
		void claculateCircum();
		void displayCircum();	
};
void  Circle::inputRadius(){
	
	cout<<"enter radius"<<endl;
	cin>>rad;
	
}

void Circle::claculateArea(){
	area = pi*rad*rad;
}

void Circle::claculateCircum(){
	circum= 2*pi*rad;
}

void Circle::displayArea(){
	cout<<"area= "<<area<<endl;
}

void Circle::displayCircum(){
	cout<<"circumcirlce= "<<circum<<endl;
}



int main(){
	
	Circle c;
	
	c.inputRadius();
	c.claculateArea();
	c.clacu lateCircum();
	c.displayArea();
	c.displayCircum();
	
	getch();
	return 0;
}
