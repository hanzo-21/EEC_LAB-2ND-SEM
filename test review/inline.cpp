/*
4. WAP to find the area of rectangle and area of square using inline function.

*/

#include<iostream>

using namespace std;

inline int  area(int l, int b){

      return (l*b);
}

inline int  area(int l){
      return (l*l);
}

int main(){

      int l,b;

      cout<<"enter length and breadth of rectangle " <<endl;
      cin>>l>>b;

      cout<<"area of rectangle = "<<area(l,b);


      cout<<endl<<"enter length of square "<<endl;
      cin>>l;

      cout<<"area of square = "<<area(l);


      return 0;
}
