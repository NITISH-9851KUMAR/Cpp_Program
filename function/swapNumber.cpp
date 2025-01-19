#include<iostream>
using namespace std;
int swap(int num1,int num2){
    int temp=num1;
    num1=num2;
    num2=temp;
    cout<<num1<<" "<<num2;
}
int main(){
    int num1,num2;
    cout<<"Enter Number1:";
    cin>>num1;
    cout<<"Enter Number2:";
    cin>>num2;
    swap(num1,num2);
    return 0;
}