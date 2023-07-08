#include <iostream>
#include<conio.h>
#include<math.h>

using namespace std;

class Rectangle {

      float xCod, yCod;

      public:

            Rectangle (){}

            Rectangle(float x, float y){
                  xCod = x;
                  yCod = y;
            }


            float getXcod(){
                  return xCod;
            }
            float getYcod(){
                  return yCod;
            }
            void display(){
                  cout<<"rectangle coordinate = ("<<xCod<<" , "<<yCod<<")"<<endl;
            }
};

class Polar {
      float radius, angle;

      public:
            Polar(){}

            Polar(float r, float a){
                  radius = r;
                  angle = a;
            }

            /*
            by using copy constructor we can convert rectangle coordinate
            (source class ) to polar coordinate (destination class).
            conversion routine in destination class.
            */

            Polar (Rectangle r){
                  float x,y;
                  x= r.getXcod();
                  y= r.getYcod();

                  radius= sqrt(pow(x,2)+pow(y,2));
                  angle = atan(y/x);
            }

             /*
            by using operator overloading we can convert polar coordinate
            (source class ) to rectangle coordinate (destination class).
            conversion routine in source class.
            */

            operator Rectangle(){
                  float x,y;

                  x= radius * cos(angle);
                  y= radius * sin(angle);

                  return Rectangle (x,y);

            }


            void display(){
                  cout<<"polar coordinate = ( r= "<<radius<<" , @ = "<<angle<<" ) "<<endl;
            }
};


int main(){

      cout<<"set rectangle coordinate"<<endl;

      Rectangle r1(5,5);
      Polar p1;

      r1.display();

      cout<<"convert into polar coordinate"<<endl;
      p1=r1;
      p1.display();

      cout<<endl<<"set polar coordinate "<<endl;

      Polar p2(10,0.78);
      Rectangle r2;

      p2.display();

      cout<<"convert into rectangular coordinate"<<endl;
      r2=p2;

      r2.display();

      getch();
      return 0;
}
