#include<iostream>
using namespace std;
class Rectangle{

public:
int length,width;
Rectangle (int len,int wi):length(len),width(wi){}

public:
int area(){
    return length*width;
}

};

int main(){

    Rectangle r1(3,4);
    cout<<"area of rectangle :"<<r1.area();
    return 0;
}