/*
wap to find the greates number of private number of two different classes using
friend function.
*/

#include<conio.h>
#include<iostream>

using namespace std;

class NumberB;
class NumberA{

      private:
            int num;

      public:
            void input(){
                  cout<<"enter number"<<endl;
                  cin>>num;
            }
            friend void great(NumberA,NumberB);

};

class NumberB{
      private:
            int num;

      public:
            void input (){
                  cout<<"enter number"<<endl;
                  cin>>num;
            }
            friend void great(NumberA, NumberB);

};

void great(NumberA n1, NumberB n2){
      if (n1.num>n2.num){
            cout<<"greater number is "<<n1.num;
      }
      else
            cout<<"greater number is "<<n2.num;
}

int main(){

      NumberA n1;
      NumberB n2;

      n1.input();
      n2.input();

      great(n1,n2);


      getch();
      return 0;
}
