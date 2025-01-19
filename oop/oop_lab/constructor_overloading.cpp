#include<iostream>
using namespace std;
class room{
public :
float length;
float width;
float height;

room (float x,float y){ // parametrised constructor overloading  1 
    length=x;
    width=y;
}

room (float m,float p,float n){  // parametrised constructor overloading  2
    length =m;
    width=p;
    height=n;
   
    
}

// finding area 
float area (){
    return length*width;
}

//finding volume 
float volume (){
  return area()*height;
}


};
int main(){
cout<<endl<<"\t"<<"******This program is based on constructor overloading*****"<<endl<<endl;
float length,height,width;
//taking input length height width
cout<<"Enter length of Room :";
cin>>length;
cout<<"Enter width of Room : ";
cin>>width;
cout<<"Enter height of Room :";
cin>>height ;


room room1=room(length,width);
room room2=room(length,width,height);

cout<<endl<<"The area of Room :"<<room1.area()<<endl;
cout<<"The volume of Room :"<<room1.volume()<<endl;




    return 0;
}