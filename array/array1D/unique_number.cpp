// find th unique number in a given array where all the elements are being repeated twice with one value being unique
#include<iostream>
using namespace std;
int main(){
int arr[12]={1,2,3,4,5,6,10,5,4,3,2,1};
for(int i=0;i<12;i++){
    for(int j=i+1;j<12;j++){
        if(arr[i]==arr[j]){
        arr[i]=arr[j]=-1;
        }
    }
}
int unique=0;
for(int i=0;i<12;i++){
    if(arr[i]>0) 
    cout<<arr[i]<<endl;
}
    return 0;
}




