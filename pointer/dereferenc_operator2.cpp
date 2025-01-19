#include<iostream>
using namespace std;
int main(){
    int x=5;
    int* ptr=&x;
    cout<<x<<endl;
    *ptr=53;
    cout<<x<<endl;
    return 0;
}