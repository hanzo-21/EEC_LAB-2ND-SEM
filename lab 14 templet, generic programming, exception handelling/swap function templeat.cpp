/*
4
wap to create a function template to sawp two values
*/

#include<iostream>

using namespace std;

template<class T>
void swapping(T &n1, T &n2){
      T temp;
      temp=n1;
      n1=n2;
      n2=temp;
}

template<class T>
void display(T a, T b){
      cout<<" 1st number =  "<<a<<endl
      <<"2nd number = "<<b<<endl;
}

int main(){
      int a=5,b=7;
      float x=6.88,y=7.99;

      cout<<"before swapping"<<endl
      <<"integers "<<endl;
      display(a,b);
      cout<<"floating points"<<endl;
      display(x,y);

      swapping(a,b);
      swapping(x,y);

      cout<<endl<<"after swapping"<<endl
      <<"integers "<<endl;
      display(a,b);
      cout<<"floating points"<<endl;
      display(x,y);



      return 0;
}
