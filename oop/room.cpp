#include<iostream>
using namespace std;
class Room{ // class
    public:
    float length;
    float breadth;
    float height;
    double CalculatArea(){
        return length*breadth;
       }
       double CalculateVolume(){
        return length*breadth*height;
       }
};
int main(){
Room room; // object

room.length=45.2;
room.height=20.5;
room.breadth=46.8;

cout<<room.CalculatArea()<<endl<<room.CalculateVolume();
    return 0;
}