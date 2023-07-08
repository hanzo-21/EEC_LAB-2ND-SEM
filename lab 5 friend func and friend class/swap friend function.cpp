/*
wap to swap the values of private member of two different class using
friend fuction
*/

#include<iostream>
#include<conio.h>

using namespace std;


class NumberB;
class NumberA {
      private:
            int num;

      public:
            void input(){
                  cout<<"enter number "<<endl;
                  cin>>num;
            }
            void display(){
                  cout<<"Number in class NumberA is "<<num<<endl;
            }
            friend void swap_numbers(NumberA &a, NumberB &b);
};

class NumberB{
      private:
            int num;

      public:
            void input(){
                  cout<<"enter number"<<endl;
                  cin>>num;
            }

            void display(){
                  cout<<"Number is class NumberB is "<<num<<endl;
            }
            friend void swap_numbers(NumberA &a, NumberB &b);
};

void swap_numbers(NumberA &a, NumberB &b){

       cout<<"sawp numbers "<<endl;
      int temp;

      temp=a.num;
      a.num=b.num;
      b.num=temp;

}

int main(){

      NumberA a;
      NumberB b;

      a.input();
      b.input();

      swap_numbers(a,b);

      a.display();
      b.display();

      getch();
      return 0;
}


