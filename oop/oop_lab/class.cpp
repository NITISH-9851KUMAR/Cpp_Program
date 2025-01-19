#include<iostream>
using namespace  std;
class room{ // these are the class 
    public :
    double length;
    double width;
    double height;

public:
double area(){
        return length*width;
    }

double volume(){
    return length*width*height;
}
};
int main(){
cout<<"This is a program for class and object "<<endl<<endl;
room room1; // room1 is object 
cout<<"Enter length of Room :";
cin>>room1.length;
cout<<"Enter width of Room :";
cin>>room1.width;
cout<<"Enter height of Room :";
cin>>room1.height;
cout<<"Area of Room :"<<room1.area()<<endl;
cout<<"Volume of Room :"<<room1.volume()<<endl;
return 0;
}
