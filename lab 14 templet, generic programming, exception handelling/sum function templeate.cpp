/*
5
create function template to clculate the sum and average of numbers
*/

#include<iostream>
#include<conio.h>

using namespace std;

template<class T>
class Numbers {
       T *num , sum;
      int i,n;

      float average;

      public:
            Numbers (int n){
                  this->n=n;
                  num=new T [n];
                  cout<<"enter "<<n<<"number"<<endl;
                  for(i=0;i<n;i++){
                        cin>>num[i];
                  }
            }

            ~Numbers(){
                  delete [] num;
            }

            void totalAndAverge();
            void display();


};

template<class T>
void Numbers<T>::totalAndAverge(){
      for(i=0,sum=0;i<n;i++){
            sum+=num[i];
      }

      average= (float) sum/n;
}

template <class T>
void Numbers<T>::display(){
      cout<<"sum = "<<sum<<endl
      <<"average = "<<average<<endl;
}

int main(){

      cout<<"for integer "<<endl;

      Numbers <int> i(5);

      cout<<"for integer "<<endl;
      Numbers<float> f(4);

      i.totalAndAverge();
      f.totalAndAverge();

      cout<<"for integer "<<endl;
      i.display();
      cout<<"for floating point"<<endl;
      f.display();


      return 0;
}
