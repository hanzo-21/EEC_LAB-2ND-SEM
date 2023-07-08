/*
wap to input marks of 5 subjects of n students and display weather they are passed or
not(pass make for each mark is 45 out of 100 )using dynamic memory allocation

*/
#include<conio.h>
#include<iostream>

using namespace std;

class Student{
      private:
            int mark[5],i,isPassed;

      public:
            Student(){
                  isPassed=1;
            }

            void input (){
                  for(i=0;i<5;i++){
                        cout<<"subject "<<i+1<<endl;
                        cin>>mark[i];
                  }
            }

            void display(){
                  for(i=0; i<5 ; i++){
                        if(mark[i]<45){
                              isPassed=0;
                              break;
                        }
                  }


                  if (isPassed==0){
                        cout<<" failed"<<endl;
                  }
                  else{
                        cout<<" passed"<<endl;
                  }

            }

};

int main(){

      Student *s;

      int n,i;

      cout<<"enter number of students "<<endl;
      cin>>n;

      s=new Student [n];

      for(i=0;i<n;i++){
            cout<<endl<<"student "<<i+1<<endl;
            s[i].input();
      }

      cout<<endl<<"result"<<endl;

      for(i=0;i<n;i++){
            cout<<"student "<<i+1;
            s[i].display();
      }

      delete []s ;



      getch();
      return 0;
}
