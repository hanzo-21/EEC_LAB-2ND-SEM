/*

2. Using class WAP to input two numbers and display the greatest number.
*/

#include<iostream>
#include<conio.h>

using namespace std;

inline int great(int a, int b){
      return (a>b? a:b);
}

class Greater {
      int x,y;

      public:
            void input(){
                  cout<<"enter x and y "<<endl;
                  cin>>x>>y;
            }
            void display(){
                  cout<<great(x,y)<<" is the greatest"<<endl;
            }
};

int main(){

      Greater g;

      g.input();
      g.display();



      return 0;
}
