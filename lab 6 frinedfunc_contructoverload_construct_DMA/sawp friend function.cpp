//wap to swap private data number to two different class using frined function

#include<conio.h>
#include<iostream>

using namespace std;

class NumberA;
class NumberB{
      private:
            int num;

      public:
            void input(){
                  cout<<"enter number in class NUmberB "<<endl;
                  cin>>num;
            }

            void  display(){
                  cout<<"number in class NumberB "<<num;
            }

            friend void swap_number(NumberA &, NumberB &);
};

class NumberA{
      private:
            int num;

      public:
            void input(){
                  cout<<"enter number in NumberA "<<endl;
                  cin>>num;
            }

            void display(){
                  cout<<"number in class NumberA " <<num<<endl;
            }

            friend void swap_number(NumberA &, NumberB &);
};

void swap_number(NumberA &a, NumberB &b){

      cout<<endl<<"swap the values"<<endl;
      int temp;
      temp = a.num;
      a.num = b.num;
      b.num = temp;
}

int main(){

      NumberA a;
      NumberB b;

      a.input();
      b.input();

      a.display();
      b.display();

      swap_number(a,b);

      a.display();
      b.display();




      getch();
      return 0;
}
