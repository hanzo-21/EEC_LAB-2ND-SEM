/*
1
wap to overload - unary operation using member function

*/

#include<iostream>
#include<conio.h>

using namespace std;

class Alpha{
      int n;

      public:
            Alpha(int x){
                  n=x;
            }

            void operator -(){
                  n=-n;
            }

            void display (){
                  cout<<"n = "<<n<<endl;
            }
};

int main(){
      Alpha a(3);

      a.display();

      -a;

      a.display();


      getch();
      return 0;
}
