/*

Measurement |l,b
            |---------------
            |input();
            |
----------------------------------------------------
                  |                       |
                  |                       |
                  V                       V
-----------------------------------------------------
            |                 ||          |
Rectangle   |                 ||Square    |calcArea();
            |calcArea();      ||          |displayArea();
            |displayArea();   ||          |
            |                 ||          |
*/

#include<iostream>
#include<conio.h>

using namespace std;

int flag=1;

class Measurement{
      protected:
            int l,b;

      public:
            void input(){
                  if (flag == 1){
                        cout<<"enter l and b "<<endl;
                        cin>>l>>b;
                        flag=0;
                  }
                  else{
                        cout<<"enter l"<<endl;
                        cin>>l;
                  }
            }
};

class Rectangle : public Measurement{
      protected:
            int area;

      public:
            void calcArea(){
                  area = l*b;
            }
            void displayArea(){
                  cout<<"rectangle area = "<<area<<endl;
            }
};

class Square : public Measurement{
      protected:
            int area;

      public:
            void calcArea(){
                  area = l*l;
            }
            void displayArea(){
                  cout<<"square area = "<<area<<endl;
            }
};


int main(){
      Rectangle r;
      Square s;

      r.input();
      s.input();

      r.calcArea();
      s.calcArea();

      r.displayArea();
      s.displayArea();



      getch();
      return 0;
}
