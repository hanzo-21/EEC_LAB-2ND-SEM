/*
wap using calss to input the length  breadth height of two rectangele using two different
objects after that pass those objects into a function using third object and clalulate the
sum of volume  of rectangle and return the value from function using concept of returning object
from a function.
*/

#include<conio.h>
#include<iostream>

using namespace std;

class Rectangle {

	private:
		int l ,b, h;


	public:
		void input ();
		Rectangle sum_of_volume(Rectangle r1, Rectangle r2 );
		void display();
};

void Rectangle::input(){

      cout<<"enter lenght"<<endl;
      cin>>l;
      cout<<"enter breadth"<<endl;
      cin>>b;
      cout<<"ente height"<<endl;
      cin>>h;
}

Rectangle Rectangle::sum_of_volume(Rectangle r1 , Rectangle r2 ){

      Rectangle temp;

      temp.l=r1.l*r1.b*r1.h+r2.l*r2.b*r2.h;

      return temp;
}

void Rectangle::display(){
      cout <<"sum of volume = "<<l<<endl;

}


int main(){

      Rectangle r1, r2, sum;

      r1.input();
      r2.input();

      sum=sum.sum_of_volume(r1,r2);

      sum.display();


      getch();
      return 0;
}
