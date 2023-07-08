/*
A     |a,b                          |B    |z;
       setValoFXY(int a, int b);    |      setValoFZ();
       displayXY();                 |      displayz();
------------------------------------|---------------------------
            |                                   |
            |                                   |
            V                                   V
-------------------------------------------------------------
B     |k , sum;
       setK(int a);
       calculateSum();
       displayAll();
       displaySum();
*/

#include<conio.h>
#include<iostream>

using namespace std;

class A{
      protected:
            int a,b;

      public:
            void setValoFXY(int x, int y){
                  a=x;
                  b=y;
            }

            void displayXY(){
                  cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
            }
};

class Z{
      protected:
            int z;

      public:
            void setValoFZ(){
                  cout<<"enter z " <<endl;
                  cin>>z;
            }
            void displayZ(){
                  cout<<"z = "<<z<<endl;
            }
};

class B : public A, public Z{
      private:
            int k , sum;

      public:
            void setK(int a){
                  k=a;
            }

            void calculateSum(){
                  sum= a+b+k+z;
            }

            void displayAll(){
                  cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
                  cout<<"k = "<<k<<endl<<"z = "<<z<<endl;
            }

            void displaySum(){
                  cout<<"sum = "<<sum<<endl;
            }
};

int main(){
      B b;

      b.setValoFXY(2,4);
      b.setValoFZ();
      b.setK(6);

      b.calculateSum();

      b.displayXY();
      b.displayZ();
      b.displayAll();
      b.displaySum();

      getch();
      return 0;
}
