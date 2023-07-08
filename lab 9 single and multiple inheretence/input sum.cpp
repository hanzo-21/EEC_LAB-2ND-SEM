/*
A     |a,b
       inputAB();
----------------------
            |
            |
            V
-----------------------
B     |c,d;
       inputCD();
       calculateSum();
       displayAB();
       displaySum();
*/

#include<conio.h>
#include<iostream>

using namespace std;

class A{
      protected:
      int a,b;

      public:
            void inputAB(){
                  cout<<"enter a" <<endl;
                  cin>>a;
                  cout<<"enter b"<<endl;
                  cin>>b;

            }
};

class B: public A{
      private:
      int c,d;

      public:
            void inputCD(){
                  cout<<"enter c" <<endl;
                  cin>>c;
                  cout<<"enter d"<<endl;
                  cin>>d;
            }

            void calculateSum(){
                  c=a+b+c+d;
            }

            void displayAB(){
                  cout<<"a = " <<a <<endl<<"b = " <<b<<endl;
            }

            void displaySum(){
                  cout<<"sum = " <<c<<endl;
            }
};

int main(){
      B b;

      b.inputAB();
      b.inputCD();

      b.calculateSum();

      b.displayAB();
      b.displaySum();



      getch();
      return 0;
}
