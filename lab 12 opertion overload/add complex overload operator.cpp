/*
3
wap to add two complex number by over loading binary
operator
*/

#include<iostream>
#include<conio.h>

using namespace std;

class  Complex{
      int real, img;

      public:
            Complex(int x, int y){
                  real=x;
                  img=y;
            }

            void operator +(Complex c2){
                  real=real+c2.real;
                  img=img+c2.img;
            }

            void display();



};

void Complex:: display(){
      cout<<"complex number= "<<real<<" +i "<<img<<endl;
}

int main(){
      Complex c1(2,4),c2(5,8);

      c1.display();
      c2.display();

      cout<<"sum"<<endl;

      c1+c2;

      c1.display();

      getch();
      return 0;
}
