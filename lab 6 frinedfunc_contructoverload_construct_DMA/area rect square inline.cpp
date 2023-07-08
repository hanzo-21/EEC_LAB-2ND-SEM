//wap to find the area of rectangele and area of square using inline

#include<conio.h>
#include<iostream>

using namespace std;

inline int area_rect(int l , int b){
      return l*b;
}

inline int area_squr(int l){
      return l*l;
}

int main(){

      int l , b;

      cout<<"for rectangle \nenter lenght"<<endl;
      cin>>l;
      cout<<"enter breadth"<<endl;
      cin>>b;

     cout<<"area of rect"<< area_rect(l,b)<<endl;

      cout<<"for square \nenter lenght"<<endl;
      cin>>l;

      cout<<"area of sqr = "<<area_squr(l)<<endl;



      getch();
      return 0;
}
