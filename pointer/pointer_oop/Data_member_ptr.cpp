#include<iostream>
using namespace std;

class room{
public:
int length;
int width;

int area(){
    return length*width;
}

};


int main(){

    int length,width;
    cout<<"Enter Length :";
    cin>>length;
    cout<<"Enter Width :";
    cin>>width;


    // declare data member 
    int room::*ptr1=&room::length;
    int room::*ptr2=&room::width;

    room room1;
    room1.*ptr1=length;
    room1.*ptr2=width;

    cout<<"Area of Room :";
    cout<<room1.area();



    return 0;
}