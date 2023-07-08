//using a class wap to take 3 inputs : principle time ,rate.keeping rate of 5%
//as the defalult argument. calcualte simple interest for 10 customers.

#include<conio.h>
#include<iostream>

using namespace std;

class Interest {
      private:
            int time;
            float principle, rate;

      public:
            void set_data(float p, int t, float r=5){
                  principle=p;
                  time=t;
                  rate=r;
            }
            void simpleIntrest(){
                  cout<<"simple interest = "<<(principle*time*rate)/100<<endl;

            }

};

int main(){
      Interest si[10];

      int i,t;
      float p,r;

      for (i=0; i<10;i++){
            cout<<"enter principle "<<endl;
            cin>>p;
            cout<<"enter time in year "<<endl;
            cin>>t;

            if(i>5){
                  cout<<"enter rate " <<endl;
                  cin>>r;
                  si[i].set_data(p,t,r);
            }
            else{
                  si[i].set_data(p,t);
            }
      }

      for(i=0;i<10;i++){
            si[i].simpleIntrest();
      }

      getch();
      return 0;
}
