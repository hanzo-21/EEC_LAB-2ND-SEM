// wap two complex number using construct overload

#include<conio.h>
#include<iostream>

using namespace std;

class Complex{
      private:
            int real, img;

      public:
            Complex(){
                  real=0;
                  img=0;
            }
            Complex(int a , int b){
                  real=a;
                  img=b;
            }
            void sumOfComplex(Complex c1, Complex c2){
                  real=c1.real+c2.real;
                  img= c1.img+ c2.img;
            }
            void display(){
                  cout<<"sum = "<<real<<" + i "<<img<<endl;
            }
};

int main(){

      Complex c1(3,4);
      Complex c2(5,7);
      Complex sum;

      sum.sumOfComplex(c1,c2);

      sum.display();


      getch();
      return 0;
}
