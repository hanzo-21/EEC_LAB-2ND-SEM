/*
wap to input a number using two different objects
in a function and add the numbers and finally
return the object from the function and display
the result.
*/

#include <conio.h>
#include <iostream>

using namespace std;

class Addition {

	private:
		int a;

	public:
		void input();
		Addition sum( Addition , Addition);
		void display();


};

void Addition::input(){

	cout<<"enter number "<<endl;
	cin>>a;
}

Addition Addition::sum(Addition a1, Addition a2){

	Addition temp;

	temp.a= a1.a + a2.a;

	return temp;

}

void Addition::display(){
	cout<<"sum = "<<a<<endl;
}

int main(){

	Addition a1, a2, a3;

	a1.input();
	a2.input();

	a3 = a3.sum(a1, a2);

	a3.display();


	getch();
	return 0;
}
