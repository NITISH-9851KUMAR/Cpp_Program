#include<iostream>
using namespace std;
int p=5;// this is global
void printf(){
    cout<<p;
}
int main(){
    int p=7;//this is local variable
    cout<<p<<endl;
    printf();
    return 0;
}