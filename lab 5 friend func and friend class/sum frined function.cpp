/*
wap to find the sum of private member of two different class using
friend function
*/


#include <iostream>
#include<conio.h>
using namespace std;

class NumberA;
class NumberB{
      private:
            int num;

      public:
            void input (){
                  cout<<"enter number"<<endl;
                  cin>>num;
            }
            friend void add (NumberA, NumberB);
};

class NumberA{
      private:
            int num ;

      public:
            void input(){
                  cout<<"enter number"<<endl;
                  cin>>num;
            }
            friend void add (NumberA,NumberB);
};

void add(NumberA n1, NumberB n2){
      cout<<"sum = " << n1.num+n2.num;

}

int main(){
      NumberA n1;
      NumberB n2;

      n1.input();
      n2.input();

      add(n1,n2);

    return 0;
}
