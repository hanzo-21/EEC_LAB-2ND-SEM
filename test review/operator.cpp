/*

8. WAP to add two complex number by overloading “+” operator
*/

#include<iostream>

using namespace std;

class Complex{
      int real,imaginary;

      public:
            Complex(int a, int b){
                  real=a;
                  imaginary=b;
            }

           void operator +(Complex c){
                  real= real+ c.real;
                  imaginary= imaginary + c.imaginary;

            }

            void display(){
                  cout<<"complex number = "<<real<<" + i "<<imaginary<<" )"<<endl;
            }
};

int main(){
      Complex c1(2,6);
      Complex c2(4,7);

      c1.display();
      c2.display();

      cout  <<"                       +"<<endl
            <<"----------------------------"<<endl;

      c1+c2;

      c1.display();

      return 0;
}
