#include<iostream>
using namespace std;

class encap{

int x;

public:
void set_data(int l){ //here use set_data for take value of x 
    x=l;
}

void get_data(){ // here use get_data for print value of t
    cout<<x;
}


};

int main(){

encap obj1;

obj1.set_data(2);
obj1.get_data();
    return 0;
}

