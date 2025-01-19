#include<iostream>
using namespace std;

class rectangle{
public:
int length;
int width;



rectangle(int x,int y){
    length=x;
    width=y;
}

int calculatarea(){
    return length*width;
}

};
int main(){
cout<<endl<<endl;
cout<<"*****This program based of object of pointer*****";
cout<<endl<<endl;

int len;
cout<<"Enter length of rectangle :";
cin>>len;
int width;
cout<<"Enter width of rectangle :";
cin>>width;

rectangle r(len,width);
rectangle *ptr=&r;

cout<<"The Area of Rectangle :";
 cout<<(*ptr).calculatarea();
 cout<<"m^2";
    return 0;
}