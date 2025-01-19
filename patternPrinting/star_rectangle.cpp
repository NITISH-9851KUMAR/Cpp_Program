#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter Number of Rows :";
    cin>>row ;
    int column;
    cout<<"Enter Numbr of Column :";
    cin>>column;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}