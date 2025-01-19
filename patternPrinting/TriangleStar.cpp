#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number :";
    cin>>num;
    int nsp=num-1;
    for(int i=1;i<=num;i++){
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int l=(i-1);l>=1;l--){
            cout<<l;
        }
       
        nsp--;
        cout<<endl;
    }
    return 0;
}