/* prove that equation
n!+1=m^2

has a real solution
*/

#include<iostream>
#include<math.h>

using namespace std;

long int Factor(int n){
      int i,x=1;

      for(i=1; i<=n ; i++){
            x=x*i;
      }

      return x;
}


int main(){

      int i;
      double  x;

      for(i=1;i<100;i++){

           x=Factor(i);

           cout<<i<<"\t=\t"<<x<<endl;
      }

      return 0;
}

