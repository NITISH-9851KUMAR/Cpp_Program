#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,-0,-1,4,3,2,6,7,8};
    int min=__INT_MAX__;
    for(int i=0;i<10;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<min;
    return 0;
}