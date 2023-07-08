/*
6. WAP to input n numbers from keyboard and count the total number of even numbers
 using dynamic memory allocation.

*/

#include<iostream>

using namespace std;

class Numbers {
      int *ptr;
      int i,n, countEve;

      public:
            Numbers(int n){
                  this->n=n;
                  ptr= new int [n];
                  countEve =0;
            }

            void input(){
                  cout<<"enter "<<n<<" number "<<endl;
                  for(i=0;i<n;i++){
                        cin>>ptr[i];
                  }
            }

            void countEven(){
                  for(i=0;i<n;i++){

                        if(ptr[i]%2==0)
                              countEve++;

                  }
            }

            void display(){
                  cout<<"even numbers = "<<countEve<<endl;
            }
};

int main(){
      int n;

      cout<<"enter number of number "<<endl;
      cin>>n;

      Numbers x(n);

      x.input();

      x.countEven();

      x.display();


      return 0;
}
