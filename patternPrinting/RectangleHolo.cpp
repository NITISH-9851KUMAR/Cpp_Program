#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number :";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num*2;j++){
            if(i==1|| i==num||j==1||j==num*2)
            cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}