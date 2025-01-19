#include<iostream>
using namespace std;
int main(){
    int a=3;
    //a++ -> pahle print kare bhir increment karo
    cout<<(a++)<<endl;//a=3 post increment
    cout<<a<<endl;// a=4

    int c=5;
    cout<<(++c)<<endl;// c=6  pre increment
    cout<<c<<endl;//5

    int b=2;
    cout<<(b--)<<endl;//b=2 post decrement
    cout<<b<<endl;//1

    int d=6;
    cout<<(--d)<<endl;//5 pre decrement 
    return 0;
}