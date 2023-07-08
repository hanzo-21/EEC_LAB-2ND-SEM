#include<iostream>
#include<conio.h>

using namespace std;

int main(){

      int i, *ptr,siz;

      cout<<"enter number "<<endl;
      cin>>siz;

      ptr= new int [siz];


      cout<<"enter numbers"<<endl;
      for(i=0; i<siz ; i++){
            cin>>ptr[i];
      }

      cout <<"even numbers are"<<endl;

      for(i=0; i<siz ; i++){
            if  (ptr[i]%2==0)
                  cout<<ptr[i]<<endl;
      }

      delete []ptr;

      getch();
      return 0;
}
