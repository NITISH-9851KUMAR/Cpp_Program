#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Line :";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num*2;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}