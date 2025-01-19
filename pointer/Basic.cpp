#include<iostream>
using namespace std;
int main(){
    int x=18;
    float y=1.25;
    // create a pointer that can store address of x
    //  as x is an integer varivable, so we need a pointer    cout<<&x;//print the address of x
    //  that can store address of integer type 
    int *ptr=&x;
    cout<<ptr<<endl;

    // create a pointer that can store address of 
    // y is a float variable ,so we need to stroe it in a 
    // float pointer 
    float *ptrf=&y;
    cout<<ptrf<<endl;

    return 0;
}