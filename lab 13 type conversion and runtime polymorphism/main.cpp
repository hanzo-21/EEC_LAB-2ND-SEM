/*
5
create an abstract class University which has showDetails() method and this class
derives a class named College and this class further derives another class called
Student. you are requited to display the information of college & student

*/

#include<iostream>
#include<string.h>

using namespace std;

class University{

      public:
            virtual void showDetails()=0;
};

class College: public University {
      private:
      char name[20],address[20];

      public:
            College(){}

            College(char n[] , char a[]){
                  strcpy(name,n);
                  strcpy(address,a);
            }

            void showDetails(){
                  cout<<"college name = " <<College::name<<endl
                  <<"address = "<<address<<endl;
            }


};

class Student: public College  {
      char name[20];
      int roll;

      public:
            Student(){}
            Student(char n[] , int r ){
                  strcpy(name,n);
                  roll=r;
            }

            void showDetails(){
                  cout<<"student name = "<<name<<endl
                  <<"roll no = "<<roll<<endl;
            }
};

int main(){
      University *uptr;
	  Student s("akash ", 44);
	  College c("eec","sanepa");


      uptr= &c;
      uptr->showDetails();
	  uptr= &s;
      uptr->showDetails();

      return 0;
}
