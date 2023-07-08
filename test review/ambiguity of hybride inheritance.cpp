/*

9. WAP to illustrate the ambiguity in hybrid inheritance
 */

#include<iostream>

using namespace std;

class A{

      public:
            void display(){
                  cout<<"class A"<<endl;
            }
};

class B : public A{
};

class C: public A{
};

class D: public B, public C{
      public:
            void show(){
                  cout<<"class D"<<endl;
            }
};

int main(){
      D d;

      d.display();
      d.show();

      return 0;
}
