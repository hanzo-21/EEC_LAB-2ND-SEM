//wap to count the total number of object using static data member and concstruct.

#include<conio.h>
#include<iostream>

using namespace std;

class ClassCount{
      private:
            static int num;

      public:
            ClassCount(){
                  num++;
            }

            void display(){
                  cout<<"number of object = "<<num<<endl;
            }

};

int ClassCount::num;

int main(){

      ClassCount c1,c2,c3;


      c3.display();

      getch();
      return 0;
}
