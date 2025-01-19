#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter a Number:";
    cin>>year;
    year%4==0?cout<<"It is leap year":cout<<"It is not leap year";
    return 0;
} 