/*
      wap to convert rectangular coordinate to polar coordinate using concept
      of type conversion.
      (use conversion routine in source code)

*/

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;


//destination class
class Polar {
      float radius, angle;

      public:
            Polar(){
                  radius=0.0;
                  angle=0.0;
            }
            Polar(float r, float a){
                  radius=r;
                  angle=a;
            }
            void display();
};

void Polar::display(){
      cout<<"polar coordinates "<<endl;
      cout<<"r= "<<radius<<" @= "<<angle<<endl;
}


//source class
class Rectangle{
      float xCod,yCod;

      public:
            Rectangle(){
                  xCod=0.0;
                  yCod=0.0;
            }
            Rectangle(float x , float y){
                  xCod=x;
                  yCod=y;
            }
            operator Polar(){
                  float r,a;

                  r=sqrt(pow(xCod,2)+pow(yCod,2));
                  a=atan(yCod/xCod);
                  return Polar(r,a);
            }
            void display();

};

void Rectangle::display(){
      cout<<"rectangle coordinate "<<endl;
      cout<<"x= "<<xCod<<" y= "<<yCod<<endl;
}

int main(){
      Rectangle r(7,7);
      Polar p;

      p=r;

      r.display();
      p.display();

      getch();
      return 0;
}
