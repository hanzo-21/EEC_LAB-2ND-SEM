/*
creat a class College which has following 
attributes / data-members 
collegeName,address,totalStudents,universityName
universityAddress
( first take information of 3 College and display
all the information of it)
*/


#include<conio.h>
#include<iostream>
#include<cstdlib>

using namespace std;

class College{
	
	private:
		char collegeName[20];
		char address[20];
		int totalStudents;
		char universityName[20];
		char universityAddress[20];
		
	public:
		void input();
		void display();
};

void College::input(){
	cout<<"enter college name"<<endl;
	cin.get(collegeName,20);
	cout<<"enter address"<<endl;
	cin>>address;
	fflush(stdin);
	cout<<"enter university name"<<endl;
	cin.get(universityName,20);
	fflush(stdin);
	cout<<"enter university address"<<endl;
	cin.get(universityAddress,20);
	cout<<"enter number of students"<<endl;
	cin>>totalStudents;
	fflush(stdin);


	
}
void College::display(){
	
	cout<<"college name = "<<collegeName<<endl;
	cout<<"address = "<<address<<endl;
	cout<<"number of students = "<<totalStudents<<endl;
	cout<<"university name = "<<universityName<<endl;
	cout<<"university address = "<<universityAddress<<endl<<endl;

}

int main(){
	int i;
	College c[3];
	
	for(i=0;i<3;i++){
		c[i].input();
	}
	cout<<endl<<endl;
	for(i=0;i<3;i++){
		c[i].display();
	}
	
	
	getch();
	return 0;
}


