/*
2
wap to add two int, two float and one float one int using class template
*/
#include<iostream>

using namespace std;

template<class T1,class T2>

class Addition {
      T1 a;
      T2 b;

      public:
            Addition(T1 x , T2 y ){
                  a=x;
                  b=y;
            }

            void displaySum(){
                  cout<< "sum = "<<a+b<<endl;
            }
};

int main(){
      Addition<int,int> ii(3,4);
      Addition<float,float> ff(2.55,9.44);
      Addition<float , int > fi(6.67,2);

      ii.displaySum();
      ff.displaySum();
      fi.displaySum();



      return 0;
}
