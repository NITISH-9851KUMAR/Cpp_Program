#include<iostream>
using namespace std;
int main(){
// first matrix
int arr[2][3]={{1,2,3},{4,5,6}};
  // 1 2 3
  // 4 5 6

// second matrix
int brr[3][2]={{1,2},{3,4},{5,6}};
// 1 2  
// 3 4
// 5 6
int rs[2][2];
int cr=3;

// multiplication
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        //i is row of arr[][]  , j is column of brr[][]
        // (arr[i][0],arr[i][1]...)* (brr[0][j],brr[1][j],brr[2][k])
        rs[i][j]=0;
        for(int k=0;k<cr;k++){
            rs[i][j]+=arr[i][k]*brr[k][j];
        }
    }
}

for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cout<<rs[i][j]<<" ";
    }
    cout<<endl;
}


return 0;
}