/*
A     |a,b
       setAB(int x, int y);
       displayAB();
----------------------
            |
            |
            V
-----------------------
B     |c,d;
       setCD(int x, int y)
       displayCD();
*/

#include<conio.h>
#include<iostream>

using namespace std;

class A{
      private:
      int a,b;

      public:
            void setAB(int x , int y){
                  a=x;
                  b=y;
            }
            void displayAB(){
                  cout<<"a = " <<a<<endl<<"b = "<<b<<endl;
            }
};

class B: public A{
      private:
      int c,d;

      public:
            void setCD(int x , int y){
                  c=x;
                  d=y;
            }
            void displayCD(){
                  cout<<"c = " <<c <<endl<<"d = " <<d;
            }
};

int main(){
      B b;

      b.setAB(2,3);
      b.setCD(4,5);

      b.displayAB();
      b.displayCD();


      getch();
      return 0;
}
