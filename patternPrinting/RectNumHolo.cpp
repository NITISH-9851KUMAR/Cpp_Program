#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number :";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num*2-2;j++){
            if(i==1) cout<<j;
            else if(j==1) cout<<"1";
            else if(i==num) cout<<j;
            else if (j==num*2-2) cout<<num*2-2;
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}