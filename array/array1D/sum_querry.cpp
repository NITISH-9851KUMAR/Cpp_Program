//
#include<iostream>
using namespace std;
int main(){
    cout<<endl<<"\t"<<"**************This program give me sum of given first_range to last_range*************** "<<endl<<endl;
    int a;
    cout<<"Enter the size of array :";
    cin>>a;
    int arr[a];
    cout<<"Enter the element :";

    // loop for take input 
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    cout<<endl;
    int range1,range2;
    cout<<"Enter first range position  :";
    cin>>range1;
    cout<<"Enter the second range position :";
    cin>>range2;
    cout<<endl;

    // loop for print range element 
    cout<<"Range element :";
    for(int i=range1-1;i<=range2-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //loop for sum output 
    int sum_range=0;
    for(int i=range1-1;i<=range2-1;i++){
        sum_range+=arr[i];
    }
    cout<<"The sum of range :";
    cout<<sum_range;

    return 0;
}