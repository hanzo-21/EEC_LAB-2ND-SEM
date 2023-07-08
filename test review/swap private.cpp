/*

5. WAP to swap the private data number of two different using friend function.
*/


#include<iostream>
using namespace std;

class Beta;

class Alpha{
      int num;

      public:
            Alpha(){
                  num=1;
            }
            void display(){
                  cout<<"alpha num = " <<num<<endl;
            }
            friend void swapping(Alpha &, Beta &);

};

class Beta{
      int num;

      public:
            Beta(){
                  num=8;
            }
            void display(){
                  cout<<"beta num = "<<num<<endl;
            }
            friend void swapping(Alpha &, Beta &);

};

void swapping(Alpha &a, Beta &b){
                  int temp;

                  temp=a.num;
                  a.num=b.num;
                  b.num=temp;
}

int main(){
      Alpha a;
      Beta b;

      cout<<"before swapping "<<endl;
      a.display();
      b.display();

      swapping(a,b);

      cout<<"after swapping"<<endl;
      a.display();
      b.display();

      return 0;
}
