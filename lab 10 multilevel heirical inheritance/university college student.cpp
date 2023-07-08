/*
                  |
University        |uName, uAddress
                  |
--------------------------------------------------------
                  |
                  |
                  V
-----------------------------------------------------------
                  |
AffilatedCollege  |cName,cAddress, noOfPrograms
                  |
-----------------------------------------------------------
                  |
                  |
                  V
-----------------------------------------------------------------
                  |
Student           |sName, sAddress, phone
                  |
*/


#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

class University {
      private:
            char uName[20],uAddress[20];

      public:
            void uInput(){
                  cout<<"enter name of university and its address "<<endl;
                  cin.get(uName,20);
                  fflush(stdin);
                  cin.get(uAddress,20);
                  fflush(stdin);
            }
            void uDisplay(){
                  cout<<"university name = "<<uName<<endl;
                  cout<<"university address = "<<uAddress<<endl;
            }
};



class AffilatedColege: public University {
      private:
            char cName[20],cAddress[20];
            int noOfPrograms;

      public:
            void cInput(){
                  cout<<"enter name of college, its address and number of programs"<<endl;
                  cin.get(cName,20);
                  fflush(stdin);
                  cin.get(cAddress,20);
                  fflush(stdin);
                  cin>>noOfPrograms;
                  fflush(stdin);

            }
            void cDisplay(){
                  cout<<"college name = "<<cName<<endl;
                  cout<<"college address = "<<cAddress<<endl;
                  cout<<"no of programs = "<<noOfPrograms<<endl;
            }
};



class Student: public AffilatedColege{
      private:
            char sName[20],sAddress[20];
            long long int phone;

      public:
            void sInput(){
                  cout<<"enter name of student, its address and phone"<<endl;
                  cin.get(sName,20);
                  fflush(stdin);
                  cin.get(sAddress,20);
                  fflush(stdin);
                  cin>>phone;

            }
            void sDisplay(){
                  cout<<"student name = "<<sName<<endl;
                  cout<<"student address = "<<sAddress<<endl;
                  cout<<"phone = "<<phone<<endl;
            }
};

int main(){

      Student s;

      s.uInput();
      s.cInput();
      s.sInput();

      s.uDisplay();
      s.cDisplay();
      s.sDisplay();

      getch();
      return 0;
}

