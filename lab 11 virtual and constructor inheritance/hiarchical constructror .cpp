#include<iostream>
#include<conio.h>

using namespace std;

class Alpha {
      int a;

      public:
            Alpha(int x){
                  a=x;
            }
            void showDetails(){
                  cout<<"a= "<<a<<endl;
            }
};

class Beta: public Alpha{
      int b,c;

      public:
            Beta (int x, int y, int z ):Alpha(x){
                  b=y;
                  c=z;
            }

            void showDetails(){
                  cout<<"b= " <<b<<endl;
                  cout<<"c= "<<c<<endl;
            }
};

class Gamma : public Alpha{
      int g;

      public:
            Gamma(int x, int y):Alpha(x){
                  g=y;
            }

            void showDetails(){
                  cout<<"g= "<<g<<endl;
            }
};

int main(){
      Beta b(1,2,3);
      Gamma g(4,5);

      b.Alpha::showDetails();
      b.showDetails();

      g.Alpha::showDetails();
      g.showDetails();


      getch();
      return 0;
}
