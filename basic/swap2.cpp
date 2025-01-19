#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"A:";
    cin>>a;
    cout<<"B:";
    cin>>b;
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}