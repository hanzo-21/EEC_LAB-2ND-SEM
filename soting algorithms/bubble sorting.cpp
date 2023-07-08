/*
sorting type where with each comparision it is decided to
swap or not

*/

#include<conio.h>
#include<iostream>

using namespace std;

void swapping ( int & x , int & y ){
      int temp;
      temp=x;
      x=y;
      y=temp;
}

int main(){
      int n;
      int *num;
      int i,j;

      cout<<"how many number "<<endl;
      cin>>n;

      num= new int [n];

      cout<<"enter "<<n<<" numbers"<<endl;

      for(i=0;i<n;i++){
            cin>>num[i];
      }

      cout<<"soring ascending order"<<endl;

      for (i=0;i<n-1;i++){
            for(j=i;j<n;j++){
                  if(num[i]>num[j]){
                        swapping(num[i],num[j]);
                  }
            }
      }

      for(i=0;i<n;i++){
            cout<<num[i]<<endl;
      }





      delete [] num;
      getch();
      return 0;
}
