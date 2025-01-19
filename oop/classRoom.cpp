#include<iostream>
using namespace std;
class room{ // here room is class
    public:
int length;
int height;
int breadth;

int area(){// it is for calcuate area
    return length*breadth;
}
int volume(){// it is for calculate volume
    return length*breadth*height;
}

};
int main(){
    room room1;// also room1 is object 
    room1.length=45;
    room1.breadth=476;
    room1.height=12;
    
    room room2; // also room2 is object
    room2.breadth=56;
    room2.height=18;
    room2.length=39;

    cout<<room1.area()<<endl;// print room1 area
    cout<<room1.volume()<<endl;// print room1 volume
    cout<<room2.area()<<endl; // print room2 area
    cout<<room2.volume()<<endl;// print room2 volume


    return 0;
}