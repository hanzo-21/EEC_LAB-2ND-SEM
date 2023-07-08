/*
wap to sum private members of two different class using
friend class
*/
#include<iostream>
#include<conio.h>

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
            friend NumberB;
};

class NumberB{
      private:
            int num;

      public:
            void input(){
                  cout <<"enter number " <<endl;
                  cin>>num;
            }
            void sum (NumberA);
};

void NumberB::sum(NumberA a){
      cout<<"sum = "<<num+a.num;
}

int main(){

      NumberA a;
      NumberB b;

      a.input();
      b.input();

      b.sum(a);




      getch();
      return 0;
}
