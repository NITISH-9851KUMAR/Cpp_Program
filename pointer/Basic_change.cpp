#include<iostream>
using namespace std;
int main(){
    int x=10;
    // first value 
    int *ptr=&x;
    cout<<"Value of x :"<<*ptr<<endl;
    // value update 
    //x=33 through *ptr 
    *ptr=33;
    cout<<"After update value :"<<*ptr<<endl;
    return 0;
}