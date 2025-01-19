#include<iostream>
using namespace std;
int main(){
    int num1=5,num2=5;
    //cin>>num1>>num2;
    for(int i=1;i<=num1;i++){
        int k=1;
        for(int j=1;j<=num2;j++){
            if(i==j||(i+j==6))
            cout<<"*";
            else cout<<" ";
        }
        cout<<endl;

    }
    return 0;
}