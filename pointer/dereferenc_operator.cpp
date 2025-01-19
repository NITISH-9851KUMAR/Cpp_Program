#include<iostream>
using namespace std;
int main(){

    int x=3;
    int* ptr=&x; //here int* is data type it is store the address of variable 
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<x<<endl;
    cout<<* ptr<<endl;

    return 0;
}