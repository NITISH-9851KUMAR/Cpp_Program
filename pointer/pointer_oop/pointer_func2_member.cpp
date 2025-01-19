#include<iostream>
using namespace std;

class room { //declare class 
public:
int length;
int width;

int area(int x,int y){
// cout<<x<<endl;
// cout<<y;
int  area1=x*y;
cout<<"Area of Room  :";
cout<<area1;
return area1;
}


};

int main(){
cout<<endl;
cout<<"This program based on the Pointer to member :";
cout<<endl<<endl;


//taking input from user 
int length,width;
cout<<"Enter The length and width of room :";
cin>>length>>width;


//declare member funciton;
int (room::*ptr)(int,int)=&room::area;
//int is declare variable , would be one or more 



room room1;//declare object 

(room1.*ptr)(length,width);




return 0;
}