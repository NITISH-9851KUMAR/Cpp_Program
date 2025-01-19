#include<iostream>
using namespace std;
int add(int a,int b=1,int c=2){
    return (a+b+c);
}
int main(){
    cout<<add(5)<<endl;// default parameter because her we passed only one parameter but in main fn there are three passed
    cout<<add(5,2)<<endl;// this fn is automatically take value of two other parameters  
    cout<<add(5,2,1)<<endl;
    return 0;
}
/*
add(int a=1,int b,int c)  -> these are not allowed 
add(int a,int b=3,int c)  -> these are also not allowed 
add(int a,int b=2, int c=3)-> these are allowed 
*/