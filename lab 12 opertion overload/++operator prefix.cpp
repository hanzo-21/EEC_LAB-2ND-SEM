/*
2
wap to overload ++ unary operation (prefix)

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

            void operator ++(){
                  ++n;
            }

            void display (){
                  cout<<"n = "<<n<<endl;
            }
};

int main(){
      Alpha a(3);

      a.display();

      ++a;

      a.display();


      getch();
      return 0;
}
