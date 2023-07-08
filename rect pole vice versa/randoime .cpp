#include<iostream>
#include<conio.h>

using  namespace std;

int main(){
      int *ptr;
      int i,j;

      for(i=0;i<10;i++){
            ptr = new int ;

            for(j=0; j<10; j++){
                  cout<<ptr<<endl;
            }
            cout<<"loop"<<endl;
            delete ptr;
      }

      return 0;
}
