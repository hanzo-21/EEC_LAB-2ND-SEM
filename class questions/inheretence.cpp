/*
person
inputDetails();
displayDetails();
name, address;
-----------------
       |
      \ /
       v
------------------
student
inputMarks();
displayMarks();
marks;
*/

#include<conio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

class Person{
      char name[20], address[20];

      public:
            void inputDetails(){
                  fflush(stdin);
                  cout<<"enter name"<<endl;
                  cin.get(name, 20);
                  fflush(stdin);
                  cout<<"enter address"<<endl;
                  cin.get(address, 20);
                  fflush(stdin);
            }

            void displayDetails(){
                  cout<<"name = "<<name<<endl;
                  cout<<"address = "<<address<<endl;
            }
};

class Student:public Person{
      int marks;

      public:
            void inputMarks(){
                  cout<<"enter makrs "<<endl;
                  cin>>marks;
            }
            void displayMakrs(){
                  cout<<"makrs = "<<marks<<endl;
            }
};

int main(){

      Student s;

      s.inputDetails();
      s.inputMarks();

      s.displayDetails();
      s.displayMakrs();


      getch();
      return 0;
}
