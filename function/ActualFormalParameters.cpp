#include<iostream>
using namespace std;
int sum(int x,int y){//here x,y formal parameters 
    return x+y;
}
int main(){
    int a=1,b=3;
    int add=sum(a,b);//here a,b are actual parameters
    cout<<add;
    return 0;
}