#include<iostream>
#include<conio.h>

using namespace std;

class Students{
	
	private:
		char stdnt_name[20];
		char faculty[20];
		int roll_no;
		
	public:
		void readData();
		void diaplayData();
};

void Students::readData(){
	
	cout<<"enter student name "<<endl;
	cin.get(stdnt_name,20);
	
	cout<<"enter faculty "<<endl;
	cin>>faculty;
	
	cout<<"enter roll number"<<endl;
	cin>>roll_no;
	
	fflush(stdin);
	
}

void Students::diaplayData(){
	
	cout<<"rollno = "<<roll_no<<endl;
	cout<<"name = "<<stdnt_name<<endl;
	cout<<"faculty = "<<faculty<<endl<<endl;
	
}

int main(){
	
	Students s[5];
	int i;
	
	for(i=0; i<5 ; i++){
		s[i].readData();
	}
	cout<<endl<<"students"<<endl;
	cout<<"------------------------------------"<<endl;
	for(i=0;i<5;i++){
		s[i].diaplayData();
	}
	
	getch();
	return 0;
}
