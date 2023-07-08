/*
1. Using class WAP to input name, address, age and salary of an Employee and
 display the information.
 */
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

class Employee{
      private:
            char name[20],address[20];
            int age;
            double salary;

      public:
            void input(){
                  fflush(stdin);
                  cout<<"enter name of employee "<<endl;
                  cin.get(name,20);
                  fflush(stdin);
                  cout<<"enter address of employee"<<endl;
                  cin.get(address,20);
                  fflush(stdin);
                  cout<<"enter age of employee "<<endl;
                  cin>>age;
                  cout<<"enter salary of employee"<<endl;
                  cin>>salary;
            }

            void display(){
                  cout  <<"Employee name = "<<name<<endl
                        <<"Employee address = "<<address<<endl
                        <<"Employee age = "<<age<<endl
                        <<"Employee salary = "<<salary<<endl;
            }
};

int main(){
      Employee e;

      e.input();
      e.display();




      return 0;
}

