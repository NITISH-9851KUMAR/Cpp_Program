// write a program to calculate the sum of even ap into n terms 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Terms That yout want to sum of even Number :";
    cin>>num;
    int a=2;
    int sum=0;
    for(int i=1;i<=num;i++){
        sum+=a;
        a+=2;
    }
    cout<<"Sum :"<<sum;
    return 0;
}