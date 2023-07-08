/*

3. WAP to input 5 number(using array), count the even numbers and display it.

*/

#include<iostream>

using namespace std;

class Array{
      int n[5],i,countEve;

      public:
            Array(){
                  countEve=0;
                  i=0;
            }
            void input(){
                  cout<<"enter 5 number " <<endl;
                  for(i=0;i<5;i++){
                        cin>>n[i];
                  }
            }

            void countEven(){
                  for(i=0;i<5;i++){

                        if(n[i]%2==0){
                              countEve++;
                        }
                  }
            }

            void display(){
                  cout<<"numbers "<<endl;
                  for(i=0;i<5;i++){
                        cout<<n[i]<<endl;
                  }
                  cout<<"even numbers = "<<countEve<<endl;
            }
};

int main(){
      Array a;

      a.input();

      a.countEven();

      a.display();


      return 0;
}
