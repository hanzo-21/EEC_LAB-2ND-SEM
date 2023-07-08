#include <iostream>
#include<conio.h>

using namespace std;

class Number_3;
class Number_2;

class Number_1{
      private:
            int a;
      public:
            void input();
            friend int max_number(Number_1,Number_2, Number_3 );
            friend void display(int );
};

void Number_1::input(){
      cout<<"enter number"<<endl;
      cin>>a;
}

class Number_2{
      private:
            int a;
      public:
            void input();
            friend int max_number(Number_1,Number_2, Number_3 );
            friend void display(int );
};

void Number_2::input(){
      cout<<"enter number"<<endl;
      cin>>a;
}

class Number_3{
      private:
            int a;
      public:
            void input();
            friend int max_number(Number_1,Number_2, Number_3 );
            friend void display(int );
};

void Number_3::input(){
      cout<<"enter number"<<endl;
      cin>>a;
}

int max_number(Number_1 n1, Number_2 n2, Number_3 n3){

      if(n1.a>n2.a && n1.a>n3.a){
            return n1.a;
      }
      else if (n2.a > n1.a && n2.a > n3.a){
            return n2.a;
      }
      else{
            return n3.a;
      }
}

void display(int num ){
      cout<<"max number is "<<num<<endl;
}


int main(){

      Number_1 n1;
      Number_2 n2;
      Number_3 n3;

      n1.input();
      n2.input();
      n3.input();

      display(max_number(n1,n2,n3));


      getch();
      return 0;
}
