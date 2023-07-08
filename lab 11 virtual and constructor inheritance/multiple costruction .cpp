/*
Beta  |Beta(int x);           ||Gamma     |Gamma(int x, int y);
      |showDetails();         ||          |showDetails();
      |                       ||          |
--------------------------------------------------------------------------------
      |                                   |
      |                                   |
      V                                   V
--------------------------------------------------------------------------------
Alpha |Alpha(int x, int y, int z, int m ,int n);
      |showDetails();
      |
*/

#include<iostream>
#include<conio.h>

using namespace std;

class Beta {
      int b,c;

      public:
            Beta(int x, int y){
                  b=x;
                  c=y;
            }

            void showDetails(){
                  cout<<"b= "<<b<<endl<<"c= "<<c<<endl;
            }
};

class Gamma {
      int g,h;

      public:
            Gamma(int x, int y){
                  g=x;
                  h=y;
            }

            void showDetails(){
                  cout<<"g= "<<g<<endl<<"h= "<<h<<endl;
            }
};

class Alpha : public Beta , public Gamma{
      int a;

      public:
            Alpha(int y , int z , int m, int n , int  x):Beta (y,z),Gamma(m,n){
                  a=x;
            }

            void showDetails(){
                  cout<<"a= "<<a<<endl;
            }
};

int main(){
      Alpha a(2,3,4,5,1);

      a.showDetails();
      a.Beta::showDetails();
      a.Gamma::showDetails();


      getch();
      return 0;
}
