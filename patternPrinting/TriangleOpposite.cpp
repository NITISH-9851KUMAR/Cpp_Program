#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number :";
    cin>>num;
    int nst=num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        nst--;
        cout<<endl;
    }
    return 0;
}