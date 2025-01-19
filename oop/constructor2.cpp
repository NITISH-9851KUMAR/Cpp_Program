#include <iostream>
using namespace std;
class room
{
private:
    double length;
    double height;

public:
    //room1
    room() { // default constructor
        length = 0;
        height=0;
        cout << length << endl;
        cout<<height<<endl;
    }
    //room2
    room(double x, double y) { // parametrized constructor
        length = x;
        height = y;
        cout << length << " " << height<<endl;
    }
    //room3
    room(room &r) { // copy constructor
        length = r.length;
        height = r.height;
        cout<<r.length<<" "<<r.height<<endl;
    }

    room(room&c){
        length=c.length;
        height=c.height;
    }
    double area(){
        return length*height;
    }
};
int main()
{
    room room1;
    cout<<room1.area()<<endl;
    room room2(1.1, 2.5);
    cout<<room2.area()<<endl;
    room room3 = room2;
    cout<<room3.area()<<endl;
    room room4=room2;
    return 0;
}