#include<iostream>
#include<conio.h>

using namespace std;

class Employee {
	
	private:
		int empNo;
		char name[20],address[20];
	public:
		void readData();
		void displayData();
	
};

void Employee::readData(){
	
	cout<<"enter Employee number"<<endl;
	cin>>empNo;
	
	fflush(stdin);
	
	cout<<"enter name "<<endl;
	cin.get(name,20);
	
	cout<<"enter address"<<endl;
	cin>>address;
	
}

void Employee::displayData(){
	
	cout<<"Employee id = "<<empNo<<endl;
	cout<<"name = "<<name<<endl;
	cout<<"address = "<<address<<endl<<endl;
	
}

int main(){
	
	Employee e1,e2;
	
	e1.readData();
	e2.readData();
	cout<<endl<<"employees : "<<endl<<endl;
	e1.displayData();
	e2.displayData();
	
	
	
	getch();
	return 0;
}
