#include<conio.h>
#include<iostream>

using namespace std;

class Rectangle{
      private:
            int length , breadth, height;

      public:
            void input();
            friend void area (Rectangle );
            friend void volume (Rectangle);
};

void Rectangle::input(){
      cout<<"enter length"<<endl;
      cin>>length;
      cout<<"enter breadth"<<endl;
      cin>>breadth;
      cout<<"enter height"<<endl;
      cin>>height;
}

void area(Rectangle r){
      cout<<"area = "<<r.length *r.breadth<<endl;
}

void volume(Rectangle r ){
      cout<<"volume = "<<r.length*r.breadth*r.height;
}

int main(){
      Rectangle r;

      r.input();

      area(r);
      volume(r);

      getch();
      return 0;
}
