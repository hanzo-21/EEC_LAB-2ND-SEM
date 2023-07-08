#include<iostream>
#include<conio.h>

using namespace std;

int input(int i){
      int n;
      cout<<i+1<<"enter number ";
      cin>>n;
      return n;
}

int main(){
      int maximum, n, i;

      maximum=input(0);

      for(i=0; i<10 ; i++){

            n= input(i);
            if(maximum < n ){
                  maximum =n;
            }
      }

      cout<<"maximum =="<<maximum<<endl;



      getch();
      return 0;
}
