/*
wap to find the max amoung the private members of three different class using
frined class
*/

#include<conio.h>
#include<iostream>

using namespace std;

class NumberC;
class NumberB;
class NumberA{
      private:
            int num;

      public:
            void input(){
                  cout<<"enter number"<<endl;
                  cin>>num;
            }
            friend NumberC;
};

class NumberB{
      private:
            int num;

      public:
            void input(){
                  cout<<"enter number"<<endl;
                  cin>>num;
            }
            friend NumberC;
};

class NumberC{
      private:
            int num;

      public:
            void input (){
                  cout<<"enter number"<<endl;
                  cin>>num;
            }

            void greatest(NumberA,NumberB);

};

void NumberC::greatest(NumberA a, NumberB b){
      if (a.num>b.num && a.num>num){
            cout<<"greatest number is "<<a.num<<endl;
      }
      else if (b.num>a.num && b.num>num){
            cout<<"greatest number is "<<b.num<<endl;
      }
      else{
            cout<<"greatest number is "<<num<<endl;
      }
}

int main(){
      NumberA a;
      NumberB b;
      NumberC c;

      a.input();
      b.input();
      c.input();

      c.greatest(a,b);

      getch();
      return 0;
}
