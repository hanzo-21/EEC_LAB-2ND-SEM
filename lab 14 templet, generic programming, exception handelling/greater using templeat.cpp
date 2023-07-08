/*
1
warp to find the maximim number amoung two int, two float  using class template
*/

#include<iostream>

using namespace std;

template<class T>

class Maximum {
      T a , b;

      public:
            Maximum(T x, T y){
                  a=x;
                  b=y;
            }
            void displayMaximum (){
                  cout<<(a>b?a:b)<<" is the maximum"<<endl;
            }
};

int main(){

      Maximum<int> i(2,5);
      Maximum<float> f(6.77,6.76);

      i.displayMaximum();
      f.displayMaximum();

      return 0;
}
