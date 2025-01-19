#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter Number :";
cin>>n;

int power=0;
int arr[3  ];
for(int i=0;i<=n;i++){
    power=arr[i+1]*arr[i+1];
    cout<<power<<" ";
}

    return 0;
}