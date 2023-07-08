#include<conio.h>
#include<iostream>

using namespace std;

class Employee{
	
	private:
		float salary;
		
	public:
		void input();
		void averageSalary( Employee , Employee, Employee);
		void display();
};

void Employee::input(){
	
	cout<<"enter salary "<<endl;
	cin>>salary;
}

void Employee::averageSalary(Employee e1, Employee e2, Employee e3){
	
	salary = (e1.salary + e2.salary + e3.salary)/3;
	
}

void Employee::display(){
	cout<<" average salary = "<<salary<<"$";
}

int main(){
	
	Employee e[3], s_avg;
	
	int i;
	
	for (i=0; i< 3 ; i++){
		e[i].input();
	}
	
	s_avg.averageSalary(e[0], e[1] , e[2]);
		
	s_avg.display();
	
	getch();
	return 0;
}
