/*
1
wap to convert polar to  rectangular   co-ordinates

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

            operator Rectangular(){
                  float x, y;

                  x = radius * cos(angle);
                  y = radius * sin(angle);

                  return Rectangular(x,y);
            }

            void display(){
                  cout<<"polar co-ordinates = ( r= "<<radius<<" , @= "<<angle<<" )"<<endl;
            }
};

int main(){
      Rectangular r;
      Polar p(10, 0.78);

      r=p;

      p.display();
      r.display();


      return 0;
}
