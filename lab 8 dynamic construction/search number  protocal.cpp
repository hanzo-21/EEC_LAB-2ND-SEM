/*
wap to input name and phone number of n person and
add a method that searches phone number and display
name and phone number if found (use break if necessary)
*/


#include<conio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

class PhoneBook{

      private:
            char name[20];
            long long int phone ;

      public:
            void input();
            void display();
            int searchProtocal(long long int);
};

void PhoneBook::input(){
      fflush(stdin);
      cout<<"enter name"<<endl;
      cin.get(name,20);
      fflush(stdin);
      cout<<"enter phone number"<<endl;
      cin>>phone;
      fflush(stdin);
}

void PhoneBook::display(){
      cout<<"name  = "<<name<<endl;
      cout<<"phone = "<<phone<<endl;
}

int PhoneBook::searchProtocal(long long int s){
      if (s == phone)
            return 1;
}

int main(){

      PhoneBook *p;

      int n,i,flag=0;
      long long int Search;

      cout<<"enter number of contacts "<<endl;
      cin>>n;

      p = new PhoneBook [n];

      for(i=0; i<n ; i++){
            cout<<"for contact "<<i+1<<endl;
            p[i].input();
      }

      fflush(stdin);

      cout<<"enter number to search " <<endl;
      cin>>Search;

      for(i=0; i<n ; i++){
            flag = p[i].searchProtocal(Search);
            if (flag == 1){
                  break;
            }
      }

      if(flag == 1 ){
            cout<<endl<<"contact found"<<endl;
            p[i].display();
       }
      else
            cout<<endl<<"contact not found "<<endl;


      getch();
      return 0;
}
