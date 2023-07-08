
#include<iostream>
using namespace std;

class ClassB;
class ClassA{
    private:
        int a;
    public:
        void input();
        friend void swapValue(ClassA & , ClassB &);
        void display();
};
class ClassB{
    private:
        int b;
    public:
        void input();
        friend void swapValue(ClassA & , ClassB &);
        void display();
};
void ClassA::input(){
    cout<<"Enter the value of a:"<<endl;
    cin>>a;

}
void ClassB::input(){
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
}


void swapValue(ClassA &c1 , ClassB &c2){
    int temp;
    temp=c1.a;
    c1.a=c2.b;
    c2.b=temp;

}
void ClassA::display(){
    cout<<"a:"<<a<<endl;
}
void ClassB::display(){
    cout<<"b:"<<b<<endl;
}
int main(){
    ClassA c1;
    ClassB c2;
    c1.input();
    c2.input();
    cout<<"Before Swapping :"<<endl;
    c1.display();
    c2.display();
    cout<<"After swapping :"<<endl;
    swapValue(c1,c2);
    c1.display();
    c2.display();
    return 0;

}
