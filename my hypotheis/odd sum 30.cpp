#include<iostream>

using namespace std;

int main(){
      int i,j,k,x;
      int n[8]={1, 3, 5, 7, 9, 11, 13, 15};


            for(i=0; i<8 ;i++){
                  for(j=0; j<8 ; j++){
                        for(k=0; k<8; k++){
                              cout  <<n[i]<<endl
                                    <<n[j]<<endl
                                    <<n[k]<<endl<<endl;

                              if(n[i]+n[j]+n[k]==30 ){

                                    x=1;
                              }
                        }
                  }
            }

            if(x==1){
                  cout<<"you got bro"<<endl;

            }
            else {

                  cout<<"bad luck"<<endl;
            }


      return 0;
}
