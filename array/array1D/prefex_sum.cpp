// This is program for calculater prfex sum 
// ex 5 4 1 2 3
// an 9 10 12 15 
#include<iostream>
using namespace std;
int main(){
    int size ;
    cout<<"Enter size of Array :";
    cin>>size ;
    int arr[size];
    cout<<"Enter element of Array :";
    for(int i=0;i<size ;i++){
        cin>>arr[i];
    }
    int sum_arr=0;
    
    // loop for sum 
    cout<<"This Program to find the prefex_sum :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    
    }
    cout<<endl;
    for(int i=0;i<size;i++){
        sum_arr+=arr[i];
        cout<<sum_arr<<" ";
    }
    return 0;
}
