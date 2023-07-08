/*
3
wap create a class template to find the scaler products of vectors of integer
and vectors of floating point numbers
*/

#include<iostream>

using namespace std;

template<class T>

class Vector {
      T x,y,z, result;

      public:
            Vector(T a, T b, T c){
                  x=a;
                  y=b;
                  z=c;
            }

            void claculateScalerProduct(Vector v){
                  result= x*v.x+y*v.y+z*v.z;
            }

            void diisplayResult(){
                  cout<<"scaler product =  "<<result<<endl;
            }
};


int main(){
      Vector <int> i1(2,3,4), i2(5,6,7);
      Vector<float> f1(3.5,6.7,5.6), f2(1.1,5.88,3.77);

      i1.claculateScalerProduct(i2);
      f1.claculateScalerProduct(f2);

      i1.diisplayResult();
      f1.diisplayResult();

      return 0;
}
