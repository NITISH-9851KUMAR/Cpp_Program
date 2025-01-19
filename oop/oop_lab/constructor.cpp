#include<iostream>
using namespace std;
class room{
public:
double length;
double width;
 room (){// default constructor 
    length=0;
    width=0;
    cout<<"Length:"<<length<<endl;
    cout<<"Width:"<<width<<endl;
    }

room(double x,double y){// parametrised constructor 
    length=x;
    width=y;
    cout<<"Length :"<<length<<endl;
cout<<"Width :"<<width<<endl;
}

room(room & r){// copy constructor 
    length=r.length;
    width=r.width;
    cout<<"Length :"<<length<<endl;
    cout<<"Width :"<<width<<endl;
}
};
int main(){
double x,y;
cout<<"Enter length and width of room :";
cin>>x>>y;
room room1;//default constructor 
room room2(x,y);// parametrised constructor 
room room3=room2;// copy constructor 



    return 0;
}