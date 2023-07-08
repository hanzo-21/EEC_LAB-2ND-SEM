/*
wap to input 5 numbers  and count even number and display
id using dynami constructoir
*/

#include<conio.h>
#include<iostream>

using namespace std;

class CountEve{
      int *num;
      int i, Count;

      public:
            CountEve(){
                  num= new int [5];
                  Count=0;
            }

            void input(){
                  cout<<"enter 5 numbers"<<endl;
                  for(i=0;i<5;i++){
                        cin>>num[i];
                  }
            }

            void display(){
            for(i=0; i <5 ; i++){
                  if (num[i]%2 == 0)
                        Count++;

            }
            cout<<"number of even number "<<Count<<endl;
            delete [] num;
            }
};

int main(){

      CountEve c;

      c.input();

      c.display();



      getch();
      return 0;
}
