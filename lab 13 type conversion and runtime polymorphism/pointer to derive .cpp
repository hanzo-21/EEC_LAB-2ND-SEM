/*
3
wap to illustrate pointer to derived class object (use virtual function wherever
                                                   necessary )

*/

#include<iostream>
#include<conio.h>

using namespace std;

class Base{
      public:
            virtual void showDetails(){
                  cout<<"base member  activated"<<endl;
            }
};

class Derived: public Base {
      public:
            void  showDetails(){
                  cout<<"derived member activated"<<endl;
            }
};


int main(){
      Base *bptr;
      Base b;
      Derived d;

      cout<<"base pointer requesting base class member"<<endl;
      bptr= &b;
      bptr->showDetails();

      cout<<"base pointer requesting derived class member"<<endl;
      bptr= &d;
      bptr->showDetails();

      return 0;
}
