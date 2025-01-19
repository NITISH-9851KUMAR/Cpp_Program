#include<iostream>
using namespace std;
void changvalue(int &x,int &z){
    x=99;
    z=100;
}
int main(){
    int a,b;
    a=100;
    b=99;
    changvalue(a,b);
    cout<<a<<" " <<b<<endl;
    return 0;
}