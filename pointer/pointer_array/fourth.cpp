#include<iostream>
using namespace std;
int main(){

    int arr[3]={11,12,18};
    int (*ptr)[3]= &arr; 

    cout<<*(ptr+1)<<endl; // store the address of first element of array 
    cout<<*(arr+2)<<endl; // print the value of array of first element 
    cout<<arr<<endl; // print the address of first element 
    cout<<arr<<endl; // print the address of first element 



    return 0;
}