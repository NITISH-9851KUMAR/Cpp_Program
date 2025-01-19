#include<iostream>
using namespace std;
class area{
    private:
    float length;
    float width;
    float radius;
    float base;
    float height;

};

float area(float length,float width){ // finding area of rectangle 
    return length*width;
}

float area(float radius  ){ // finding area of sphere 
return radius*radius*3.141569;
}

float area(float base,float height, float x){ // finding area of triangle
    float area=base*height*1/2;
    return area;
}


int main(){
    cout<<endl<<"****This program base on function overloading*****"<<endl;
    cout<<"######Also This program find area of Rectangle sphere and triangle#####"<<endl<<endl;
    float length,width,base,height,radius;
    cout<<"Enter length and width of Rectangle :"; // taking input length and width
    cin>>length>>width;

    cout<<"Enter Radius of sphere :";
    cin>>radius;

    cout<<"Enter base and height of Triangle :";
    cin>>base>>height;

    float rectangle=area(length,width);
    float sphere=area(radius);
    float traingle=area(base,height,1);

    cout<<endl<<"Area of Rectangle :"<<rectangle<<endl;
    cout<<"Area of Sphere :"<<sphere<<endl;
    cout<<"Area of Triangle :"<<traingle<<endl;

    return 0;
}