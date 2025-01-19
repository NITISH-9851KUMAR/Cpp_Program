#include<iostream>
using namespace std;

class room{
    
    public :
    int length;
    int width;

    int area(){
        return length*width;
    }
    
    void show(){
        cout<<"The are of Room :"<<area();
    }
};

int main(){

room r1;
r1.length=3;
r1.width=3;

r1.show();
    return 0;
}