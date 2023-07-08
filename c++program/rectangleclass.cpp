/*
wap using calss to input the length  breadth height of two rectangele using two different
objects after that pass those objects into a function using third object and clalulate the 
sum of volume  of rectangle and return the value from function using concept of returning object
from a function.
*/

#include<conio.h>
#include<iostream>

class Rectangle {
	
	private:
		int l ,b, h;
		
		
	public:
		void input ();
		Rectangle sum_of_volume(Rectangle r1, Rectangle r2 );
		void display();
		 
	
};
