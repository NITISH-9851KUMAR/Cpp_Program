#include<iostream>
using namespace std;
int main(){
int r;
cout<<"Etner row of matrix :";
cin>>r;
int c;
cout<<"Enter columns of matrix :";
cin>>c;
int arr[r][c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>arr[i][j];
    }
}

for(int i=0;i<c;i++){// print from to c
    for(int j=0;j<r;j++){
        cout<<arr[j][i]<<" ";
    }
    cout<<endl;
}
return 0;
}