#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number :";
    cin>>num;
    int count =0;
    while(num!=0){
        num/=10;
        count++;
    }
    cout<<"Digit :"<<count;
    return 0;
}