
/*
wap to find the sum of complex number of private members
of two different class using friend class
*/

#include<conio.h>
#include<iostream>

using namespace std;

class NumberB;
class NumberA{
      private:
            int real,img;

      public:
            void input(){
                  cout<<"enter real number"<<endl;
                  cin>>real;
                  cout<<"enter img number"<<endl;
                  cin>>img;
            }
            friend NumberB;
};

class NumberB{
      private:
            int real, img;

      public:
            void input(){
                  cout<<"enter real number"<<endl;
                  cin>>real;
                  cout<<"enter img number"<<endl;
                  cin>>img;
            }
            void sumOfComplex(NumberA);
};

void NumberB::sumOfComplex(NumberA a){
      cout<<"sum of complex = " << real+a.real<<"+ i " << img+a.img<<endl;
}

int main(){

      NumberA a;
      NumberB b;

      a.input();
      b.input();

      b.sumOfComplex(a);


      getch();
      return 0;
}
