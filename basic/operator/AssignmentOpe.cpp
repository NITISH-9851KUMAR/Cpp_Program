#include<iostream>
using namespace std;
int main(){
    int a=3;
    int b=5;
    int c=4;
    int d=6;
   // a+=1 ->a=a+1
   // b-=2 ->b=b-2
   // c*=3 -> c=c*3;
   // d/=5 -> d=d/5;
    cout<<(a+=2)<<endl;
    cout<<(b-=1)<<endl;
    cout<<(c*=2)<<endl;
    cout<<(d/=2)<<endl;
    return 0;
}