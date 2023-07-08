/*
6
wap to illustrate the use of single try catch statement
*/

#include<iostream>

using namespace std;

int main(){
      float a,b,div;

      cout<<"enter a and  b "<<endl;
      cin>>a>>b;

      try {
            if(b==0){
                  throw b;
            }
            div=a/b;
            cout<<"a/b = "<<div<<endl;
      }

      catch(float n ){
            cout<<"cannot be divisibale by "<<0<<endl;
      }

      return 0;
}
