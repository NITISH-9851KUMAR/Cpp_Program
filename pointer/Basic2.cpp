#include<iostream>
using namespace std;
int main(){
    int x=12;

    int* ptr=&x;
    cout<<ptr<<"\t";// print address of x
    // using  dereference operator 
    cout<<*ptr<<endl;// print value of x
    return 0;
}