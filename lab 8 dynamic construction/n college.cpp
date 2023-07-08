/*
wap to input name, address, phone of n college and
display
*/

#include<conio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

class CollegeInfo{
      char name[20], address[20];
      long long int phone;

      public:
            void input();
            void display();

};

void CollegeInfo::input(){
      fflush(stdin);
      cout<<"enter name of college"<<endl;
      cin.get(name, 20);
      fflush(stdin);
      cout<<"enter address " <<endl;
      cin.get(address, 20);
      fflush(stdin);
      cout<<"enter phone number"<<endl;
      cin>>phone;
      fflush(stdin);
}

void CollegeInfo::display(){
      cout<<name<<"\t\t"<<address<<"\t\t"<<phone<<endl;
}

int main(){
      CollegeInfo *c;

      int i ,n;

      cout<<"enter number of college"<<endl;
      cin>>n;

      c= new CollegeInfo [n];

      cout<<"enter data for "<<endl;

      for(i=0;i<n;i++){
            cout<<"college "<<i+1<<endl;
            c[i].input();
      }

      cout<<endl<<"college info  "<<endl;

      cout<<"name \t\taddress\t\tphonen" <<endl;
      for(i=0;i<n;i++){
            c[i].display();
      }

      delete [] c;

      getch();
      return 0;
}
