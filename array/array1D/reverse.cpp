/*Write a progrma to reverse the array withour using any extra array*/
#include<iostream>
using namespace std;
void reverse (int arr[]){
    for(int i=0,j=5;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

    }
    return ;
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    reverse(arr);
    for(int i=0;i<6;i++){
        cout<<arr[i];
    }
    return 0;
}
