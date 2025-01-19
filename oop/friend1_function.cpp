#include<iostream>
using namespace std;

class room{
    int length;

    friend int printValue(room);
    
};

int printValue (room r1){
r1.length=3;
return r1.length;
}
int main(){

    room r1;
    
    cout<<printValue(r1);
    return 0;
}