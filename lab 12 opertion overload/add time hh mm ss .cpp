/*
5
wap to add two time (hr:mm:ss) using bninary plus(+) operator
*/

#include<iostream>
#include<conio.h>

using namespace std;


class Time{
      int hr,mm,ss;

      public:
            Time(){}
            Time (int x , int y , int z){
                  hr=x;
                  mm=y;
                  ss=z;
            }

            Time operator +(Time t){
                Time temp;

                temp.ss=ss+ t.ss;
                temp.mm=temp.ss/60;
                temp.ss=temp.ss%60;

                temp.mm=temp.mm+mm+t.mm;
                temp.hr=temp.mm/60;
                temp.mm=temp.mm%60;

                temp.hr=temp.hr+hr+t.hr;

                return temp;
            }

            void display();
};

void Time::display(){
      cout<<"time = ("<<hr<<" : "<<mm<<" : "<<ss<<")"<<endl;
}


int main(){
      Time t1(2,55,44), t2(3,36,27),t3;

      t1.display();
      t2.display();

      t3=t1+t2;
      cout<<"sum"<<endl;

      t3.display();

      getch();
      return 0;
}
