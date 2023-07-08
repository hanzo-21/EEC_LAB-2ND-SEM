#include<conio.h>
#include<iostream>

using namespace std;

class Addition{
	
	private:
		int a;
		
	public:
		void input();
		void sum(Addition, Addition);
		void display();
};

void Addition::input(){
	
	cout<<"enter number "<<endl;
	cin>>a;
	
}

void Addition::sum(Addition a1, Addition a2){
	
	a = a1.a + a2.a;
	
}

void Addition::display(){
	cout<<" sum = "<<a;
}

int main(){
	
	Addition a1 ,a2 ,a3;
	
	a1.input();
	a2.input();
	
	a3.sum(a1, a2 );
	
	a3.display();
	
	
	getch();
	return 0;
}
