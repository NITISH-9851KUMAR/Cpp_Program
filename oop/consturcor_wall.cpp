#include<iostream>
using namespace std;
class wall{
    private :
    double length;
    double height;

public:
// wall 1
wall (){// default constructor
    length=0;
    height=0;
    cout<<length<<" "<<height<<endl;

}
// wall 2
wall(double x,double y){// parametrized constructor
    length=x;
    height=y;
    cout<<x<<" "<<y<<endl;
}
// wall3
wall(wall&r){// copy constructor
    length=r.length;
    height=r.height;
    cout<<r.height<<" "<<r.length<<endl;
}
//for area
double area(){
    return length*height;
}
};
int main(){
    wall wall1;
    wall wall2(2.3,3.6);
    cout<<wall2.area()<<endl;
    wall wall3=wall2;
    cout<<wall3.area()<<endl;
    return 0;
}