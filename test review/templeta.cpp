/*


7. Create a template class which calculates the sum of two int,
 two float and one int and a float.

*/

#include<iostream>

using namespace std;

template<class T1, class T2>

class Alpha{
      T1 x;
      T2 y;

      public:
            Alpha(T1 a, T2 b){
                  x=a;
                  y=b;
            }

            void displaySum(){
                  cout<<"sum = "<<x+y<<endl;
            }
};

int main(){
      Alpha <int, int> ii(3,7);
      Alpha<float, float> ff(3.66,5.789);
      Alpha<float,int> fi(3.376,5);

      ii.displaySum();
      ff.displaySum();
      fi.displaySum();

      return 0;

}
