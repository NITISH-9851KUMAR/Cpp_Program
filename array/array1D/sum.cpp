// find the sum of given array
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter size of array :";
    cin>>a;
    int arr[a];//{1,2,3,4,5,6,7,8,9}
    int sum=0;
    cout<<"Enter the element of array :";
    // for(int i=0;i<a;i++){
    //     cin>>arr[i];
    // }
    for(int &element:arr){
        cin>>element;
    }
    cout<<"The sum of array :";
    for(int i=0;i<a;i++){
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}