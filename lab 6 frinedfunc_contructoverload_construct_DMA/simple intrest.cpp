//wap to find the simple intrest where rate should be 8% if not supplied by the user
//in argument

#include<conio.h>
#include<iostream>

using namespace std;

class Interest{
      int time;
      float principle,rate;
      char check;

      public:

            void set_data(float p , int t, float r=8){
                  principle=p;
                  time=t;
                  rate=r;
            }
            void display();
};


void Interest::display(){
      cout<<"simple interest = "<<(principle*rate*time)/100<<endl;
}


int main(){

      Interest i;
      float p,r;
      int t;
      char check;

      cout<<"enter principle"<<endl;
      cin>>p;

      cout<<"enter time in year"<<endl;
      cin>>t;

      cout<<"press [y] to enter new rate (default rate = 8%)"<<endl;
      cin>>check;

      if (check=='y'){
            cout<<"enter new rate "<<endl;
            cin>>r;
            i.set_data(p,t,r);
      }
      else{
            i.set_data(p,t);
      }


      i.display();

      getch();
      return 0;
}
