/*
A     |inputA();
      |displayA();
      |
------------------------------------------------------------
      |                             |
      |                             |
      V                             V
-----------------------------------------------------
B     |inputB();        ||C   |inputC();
      |displayB();      ||    |displayC
      |                 ||    |
---------------------------------------------------------------------
      |                       |
      |                       |
      V                       V
------------------------------------------------------------------
D     |inputD();
      |displayD();
      |
*/

#include<iostream>
#include<conio.h>

using namespace std;

class A{
      int a;

      public:
            void inputA(){
                  cout<<"enter a "<<endl;
                  cin>>a;
            }
            void displayA(){
                  cout<<"a= "<<a<<endl;
            }
};

class B: virtual public A{
      int b;

      public:
            void inputB(){
                  cout<<"enter b "<<endl;
                  cin>>b;
            }
            void displayB(){
                  cout<<"b = "<<b<<endl;
            }
};

class C: virtual public A{
      int c;

      public:
            void inputC(){
                  cout<<"enter c "<<endl;
                  cin>>c;
            }
            void displayC(){
                  cout<<"c= "<<c<<endl;
            }
};

class D: public B ,  public C{
      int d;

      public:
            void inputD(){
                  cout<<"enter d" <<endl;
                  cin>>d;
            }

            void displayD(){
                  cout<<"d= " <<d<<endl;
            }

};

int main(){

      D d;

      d.inputA();
      d.inputB();
      d.inputC();
      d.inputD();

      d.displayA();
      d.displayB();
      d.displayC();
      d.displayD();


      getch();
      return 0;
}
