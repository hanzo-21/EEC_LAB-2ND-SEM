#include<iostream>
#include<math.h>
using namespace std;


class Polar{

	private:
		float rad,ang;
	public:
		Polar(){
		}
		Polar(float a,float r){
			rad=r;
			ang=a;
		}
		void display(){
                  cout<<"rad= "<<rad<<endl<<"ang= "<<ang<<endl;
            }

};


class Rectangle{
	private:
		int xco,yco;
	public:
		Rectangle(){
		}
		Rectangle(int x,int y){
			xco=x;
			yco=y;

		}
		void display(){

			cout<<"xco= "<<xco<<endl<<"yco= "<<yco<<endl;

            }

		operator Polar(){

			float a,r;
			a=atan(yco/xco);
			r=sqrt(xco*xco+yco*yco);
			return Polar(a,r);
		}



};

int main(){
	Rectangle r(7,8);
	Polar p;

	p=r;
	r.display();
	p.display();
	return 0;
}
