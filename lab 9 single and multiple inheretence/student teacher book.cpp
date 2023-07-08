/*
student     |teacher
name        |name
add         |add
----------------------
            |
            |
            V
-----------------------
book
name,sn;
*/

#include<conio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

class Student {
      private:
            char name[20],add[20];

      public:
            void stuInput(){
                  cout<<"enter name of student "<<endl;
                  cin.get(name,20);
                  fflush(stdin);
                  cout<<"enter address of student"<<endl;
                  cin.get(add,20);
                  fflush(stdin);
            }

            void stuDisplay(){
                  cout<<"name of student = " <<name<<endl;
                  cout<<"address of student = "<<add<<endl;
            }
};

class Teacher{

      private:
            char name[20], add[20];

      public:
            void teachInput(){
                  cout<<"enter name of teacher "<<endl;
                  cin.get(name,20);
                  fflush(stdin);
                  cout<<"enter address of teacher"<<endl;
                  cin.get(add,20);
                  fflush(stdin);
            }

            void teachDisplay(){
                  cout<<"teacher name = "<<name<<endl;
                  cout<<"teacher address = "<<add<<endl;
            }
};

class Book : public Student, public Teacher{

      private:
            char name[20];
            long int sn;

      public:
            void bookInput(){
                  cout<<"enter name of book " <<endl;
                  cin.get(name,20);
                  fflush(stdin);
                  cout<<"enter serial number "<<endl;
                  cin>>sn;
                  fflush(stdin);
            }

            void bookDisplay(){
                  cout<<"book name = "<<name<<endl;
                  cout<<"serial num = "<<sn<<endl;
            }
};

int main(){
      Book b;

      b.stuInput();
      b.teachInput();
      b.bookInput();

      b.stuDisplay();
      b.teachDisplay();
      b.bookDisplay();



      getch();
      return 0;
}
