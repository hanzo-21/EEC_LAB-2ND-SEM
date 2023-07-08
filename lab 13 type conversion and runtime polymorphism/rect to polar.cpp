/*
2
wap to convert rectangular to polar co-ordinates

*/


#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

class Rectangular {
      float xCod, yCod;

      public:
            Rectangular(){}

            Rectangular ( float x, float y){
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
                  cout<<"rectangular co-ordinates = ( "<<xCod<<" , "<<yCod<<" )"<<endl;
            }
};

class Polar {
      float radius , angle;

      public:
            Polar(){}

            Polar(float r, float a){
                  radius = r;
                  angle = a;
            }

            Polar (Rectangular r){
                  float x,y;

                  x= r.getXcod();
                  y= r.getYcod();

                  radius= sqrt(pow(x,2)+pow(y,2));
                  angle = atan(y/x);
            }

            void display(){
                  cout<<"polar co-ordinates = ( r= "<<radius<<" , @= "<<angle<<" )"<<endl;
            }
};

int main(){
      Rectangular r(7,7);
      Polar p;
      p=r;

      r.display();
      p.display();

      return 0;
}
