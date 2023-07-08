/*
7
wap to illustrate the use of multiple catch ststement
*/

#include<iostream>

using namespace std;

int main(){
      int a,b,c,d;
      float m,div;

      cout<<"enter a,b,c,d "<<endl;
      cin>>a>>b>>c>>d;

      try{
            if(b==0){
                  throw b;
            }
            if(c==d){
                  throw 'c';
            }

            div = (float) a/b;
            m=(a-b)/(c-d);

            cout<<"div a/b = "<<div<<endl;
            cout<<"slope m = "<<m<<endl;

      }

      catch(int n){
            cout<<"cannot be divisbale by "<<n<<endl;
      }
      catch(char e){
            cout<<"denotminators cannot be equals"<<endl;
      }



      return 0;
}
