/*
A     |a,b
       inputAB();
       displayAB();
----------------------
            |
            |
            V
-----------------------
B     |c,d;
       inputCD();
       displayCD();
*/

#include<conio.h>
#include<iostream>

using namespace std;

class A{
      private:
      int a,b;

      public:
            void inputAB(){
                  cout<<"enter a" <<endl;
                  cin>>a;
                  cout<<"enter b"<<endl;
                  cin>>b;

            }
            void displayAB(){
                  cout<<"a = " <<a<<endl<<"b = "<<b<<endl;
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
            void displayCD(){
                  cout<<"c = " <<c <<endl<<"d = " <<d;
            }
};

int main(){
      B b;

      b.inputAB();
      b.inputCD();

      b.displayAB();
      b.displayCD();


      getch();
      return 0;
}
