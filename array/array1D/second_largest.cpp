// find the second largest element in the given array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{2,3,7,1};
    //int arr[7]={2,3,5,6,1,7};
    int max=INT16_MIN;// smallest value 
    int index=0;
    // this loop find 1st largest number 
    for(int i=0;i<arr.size();i++){
        //cout<<arr[i]<<" ";
        if(arr[i]>max){
        max=arr[i];
        index=i; 
        }
    }
    // max=1st largets number 
    int position=index;
    // position-> index of largest number 
    arr.erase(arr.begin()+position);
    // now our arr={2,3,5,6,1}
    // delete 1st largest number 

    // finding 2nd largest number 
    int max2=INT16_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max2){
        max2=arr[i];
        }
    }
    cout<<max2<<" ";

    return 0;
}