//wap to illustrate the use of desturctor

#include<iostream>
#include<conio.h>

using namespace std;

class Test{

      public:
            Test(){
                  cout<<"object was created "<<endl;
            }
            ~Test(){
                  cout<<"object was destroyed"<<endl;
            }
};

int main(){

      Test t1;
      {
            Test t2 ;
      }

      getch();
      return 0;
}
