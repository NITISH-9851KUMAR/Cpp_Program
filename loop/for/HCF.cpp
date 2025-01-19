#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter Number1 :";
    cin>>num1;
    cout<<"Enter Number2 :";
    cin>>num2;
    int gcd;
    for(int i=1; i<=num1&num2;i++){
        if(num1%i==0 && num2%i==0)
        gcd=i;
    }
    cout<<"HCF :"<<gcd;
    return  0;
}