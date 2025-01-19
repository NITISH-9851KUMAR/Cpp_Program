#include<iostream>
using namespace std;
int main(){
    float f=10.2;
    int x=10;
    void *ptr=&f;
    ptr=&x;
    int *intepointer=(int *)ptr;//use typecasting here 
    cout<<*intepointer<<endl;
    //cout<<*ptr<<endl;
    return 0;
}