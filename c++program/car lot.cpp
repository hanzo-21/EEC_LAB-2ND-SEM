/*

1. Create a c++ structure to contain the following piece of information 
about cars on used car lot.
a) Manufacturer of the car.
b) Model name of the car.
c) The demand price of car.
d) The number of miles on odometer.

*/



#include<iostream>
#include<conio.h>

using namespace std;

struct car {
	
	char manufacturer[20], model[20];
	float price, miles;
	
};


int main (){
	
	car c;
	
	cout<<"enter the name of Manufacturer "<<endl;
	cin.get(c.manufacturer,20);
	
	cout<<"enter name of Model "<<endl;
	cin>>c.model;
	
	cout<<"enter demand price "<<endl;
	cin>>c.price;
	
	cout<<"enter miles on odometer "<<endl;
	cin>>c.miles;
	
	
	cout<<endl<<endl<<"car available in lot"<<endl<<endl;
	
	cout<<"Manufacturer = "<< c.manufacturer<<endl;
	cout<<"Model name = "<<c.model<<endl;
	cout<<"demand price = "<<c.price<<endl;
	cout<<"miles on odometer = "<<c.miles<<endl;	
	
	getch();
	return 0;
}
