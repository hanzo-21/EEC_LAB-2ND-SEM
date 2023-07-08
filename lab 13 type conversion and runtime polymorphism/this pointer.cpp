/*
4
wap to illustrate the use of this pointer

*/

#include<iostream>
#include<conio.h>

using namespace std;

class Numbers{
      int a,b;

      public:
            Numbers(int a, int b){
                  this->a=a;
                  this->b=b;
            }

            void display(){
                  cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
            }
};


int main(){
      Numbers n(2,4);

      n.display();


      getch();
      return 0;
}
