#include<iostream>
using namespace std;
int main(){
    int arr[4];
    cout<<"Enter array element :";
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    cout<<"Array Element :";
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}