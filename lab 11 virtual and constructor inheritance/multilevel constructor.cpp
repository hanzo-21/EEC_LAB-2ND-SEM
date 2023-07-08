/*
Alpha |Alpha(int x);
      |showDetails();
      |
--------------------------------------------------------------------
      |
      |
      V
----------------------------------------------------------------------
Beta  |Beta(int x, int y, int z);
      |showDetails();
      |
----------------------------------------------------------------------------
      |
      |
      V
------------------------------------------------------------------------------
Gamma |Gamma(int x, int y,int z, int m ,int n);
      |showDetails();
      |
------------------------------------------------------------------------------
*/


#include<iostream>
#include<conio.h>

using namespace std;

class Alpha{
      int a;

      public:
            Alpha(int x){
                  a=x;
            }

            void showDetails(){
                  cout<<"a = "<<a<<endl;
            }
};

class Beta : public Alpha{
      int b,c;

      public:
            Beta(int x, int y, int z):Alpha(x){
                  b=y;
                  c=z;
            }

            void showDetails(){
                  cout<<"b= "<<b<<endl<<"c= "<<c<<endl;
            }
};

class Gamma : public Beta{
      int g,h;

      public:
            Gamma(int x , int y , int z, int m, int n): Beta (x,y,z){
                  g=m;
                  h=n;
            }

            void showDetails(){
                  cout<<"g= "<<g<<endl<<"h =" <<h<<endl;
            }
};

int main(){
      Gamma g(1,2,3,4,5);

      g.Alpha::showDetails();
      g.Beta::showDetails();
      g.showDetails();


      getch();
      return 0;
}
