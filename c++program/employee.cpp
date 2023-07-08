/*
using class WAP to input name, address, age
and salary of an Employee and display the
information 
*/

#include<conio.h>
#include<iostream>
#include<cstdlib>

using namespace std;

class Employee{
	
	private:
		char name[20];
		char address[20];
		int age;
		float salary;
		
	public:
		void input();
		void display();
};

void Employee::input(){
	cout<<"enter name"<<endl;
	cin.get(name,20);
	cout<<"enter address"<<endl;
	cin>>address;
	cout<<"enter age"<<endl;
	cin>>age;
	cout<<"enter salary"<<endl;
	cin>>salary;
	fflush(stdin);	
}
void Employee::display(){
	cout<<endl<<endl<<"name=\t"<<name<<endl;
	cout<<"address="<<address<<endl;
	cout<<"age=\t"<<age<<endl;
	cout<<"salary=\t"<<salary<<endl;
}

int main(){
	
	Employee e;
	
	e.input();
	e.display();
	
	getch();
	return 0;
}


