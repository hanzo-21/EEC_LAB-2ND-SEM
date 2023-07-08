/*
wap to find the smple intrest using soncept of
dynaminc initilization of object
*/

#include<conio.h>
#include<iostream>

using namespace std;

class SimpleIntrest{
      int time;
      float principle, rate,si;

      public:
            void set_data(float p, int t, float r){
                  principle=p;
                  time = t;
                  rate = r;
            }

            void intrest(){
                  si= (principle*time*rate)/100;
            }

            void display(){
                  cout<<"simple interest = "<<si<<endl;
            }
};

int main(){

      SimpleIntrest *s;
      int t;
      float p , r;
      s= new SimpleIntrest ;

      cout<<"enter princliple "<<endl;
      cin>>p;
      cout<<"enter time "<<endl;
      cin>>t;
      cout<<"enter rate"<<endl;
      cin>>r;

      s->set_data(p,t,r);

      s->intrest();

      s->display();

      delete s;

      getch();
      return 0;
}
