/*

Book        |bName, bID
            |---------------
            |inputDetails();
            |
------------------------------------------------------------------------------------
                  |                       |                             |
                  |                       |                             |
                  V                       V                             V
------------------------------------------------------------------------------------
            | name,roll       ||          |name       ||          |name
Student     |-----------------||Teacher   |-----------|| Staff    |-------------
            |input();         ||          |input();   ||          |input();
            |display();       ||          |display(); ||          |display();
            |                 ||          |           ||          |
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

class Book{
      protected:
            char bName[20];
            int bID;

      public:
            void inputDetails(){
                  cout<<"enter book name and book id "<<endl;
                  cin.get(bName,20);
                  cin>>bID;
                  fflush(stdin);
            }
};

class Student : public Book{
      private:
            char name[20];
            int roll;

      public:
            void input(){
                  cout<<"enter student name and roll number"<<endl;
                  cin.get(name, 20);
                  cin>>roll;
                  fflush(stdin);
            }
            void display(){
                  cout<<"student name = "<<name<<endl;
                  cout<<"roll no = "<<roll<<endl;
                  cout<<"reserved book name = "<<bName<<endl;
                  cout<<"book id - "<<roll<<endl;
            }
};



class Teacher : public Book{
      private:
            char name[20];

      public:
            void input(){
                  cout<<"enter teacher name "<<endl;
                  cin.get(name, 20);
                  fflush(stdin);

            }
            void display(){
                  cout<<"teacher name = "<<name<<endl;
                  cout<<"reserved book name = "<<bName<<endl;
                  cout<<"book id - "<<bID<<endl;
            }
};



class Staff : public Book{
      private:
            char name[20];

      public:
            void input(){
                  cout<<"enter staff name "<<endl;
                  cin.get(name, 20);
                  fflush(stdin);

            }
            void display(){
                  cout<<"staff name = "<<name<<endl;
                  cout<<"reserved book name = "<<bName<<endl;
                  cout<<"book id - "<<bID<<endl;
            }
};

int main(){
      Student stu;
      Teacher t;
      Staff s;

      stu.input();
      stu.inputDetails();

      t.input();
      t.inputDetails();

      s.input();
      s.inputDetails();

      stu.display();
      t.display();
      s.display();

      getch();
      return 0;
}
