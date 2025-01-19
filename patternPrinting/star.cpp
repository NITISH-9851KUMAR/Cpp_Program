#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"NEnter Number:";
    cin>>num;
    int nst=1;
    int nsp=num-1;
    for(int i=1;i<=num;i++){
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        nst+=2;
        nsp--;
        cout<<endl;
    }

    return 0;
}