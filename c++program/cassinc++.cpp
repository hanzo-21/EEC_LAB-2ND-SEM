// create class of name address rollno and section and display 2 students results 

#include<conio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

class student{
	
	private:
		char name[20];
		char address[20];
		int roll;
		char sec;
		
	public:
		void input();
		void display();
			
};
void  student::input(){
	
	cout<<"enter student name "<<endl;
	cin.get(name,20);
	cout<<"enter address "<< endl;
	cin>>address;
	cout<<"enter section "<< endl;
	cin>>sec;
	cout<<"enter roll:no "<< endl;
	cin>>roll;
	fflush(stdin);
	
	
}
void student::display(){
	
	cout<<endl<<"roll:no = "<<roll<<endl;
	cout<<"name = "<<name<<endl<<"address = "<<address<<endl<<"section = "<<sec<<endl;
}


int main(){
	
	student s[2];
	int i;
	
	for(i=0;i<2;i++){
		s[i].input();
	}
	getch();
	for(i=0;i<2;i++){
		s[i].display();
	}
	
	
	getch();
	return 0;
}
