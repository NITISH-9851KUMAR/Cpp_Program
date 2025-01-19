#include<iostream>
using namespace std;

class room1 { //define  first class  

public:
int length;
int width;

void set_data1(int l,int w){
    this->length=l; //use this pointer 
    this->width=w;  // use this pointer 
}
int area1(){
    return length*width;
}
 };

class room2:public room1{ // define second class 
public:
int breadth;

void set_data2(int a,int b,int c){
    this->length=a;
    this->width=b;
    this->breadth=c;
}
int area2(){
return length*width*breadth;

}
 };



int main(){

room1 r1;

r1.set_data1(2,3);
cout<<"The area of room1 :";
cout<<r1.area1()<<endl;

room2 r2;
r2.set_data2(3,4,5);
cout<<"The area of room2 :";
cout<<r2.area2();

return 0;
}

