//sort an Array consisting of only 0s and 1s.
// Q.   1 1 0 0 1 0 1 0
//Ans-> 0 0 0 0 1 1 1 1

#include<iostream>
#include<vector>
using namespace std;
int main(){
    //int arr[8]={1,1,0,0,1,0,1,0};
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter element of array :";
    for(int i=0;i<arr.size();i++){
    cin>>arr[i];
    }

    int x=0;
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(x==arr[i]){
            count++;
        }
    }
 //count=4
 for(int i=0;i<arr.size();i++){
    if(i<count) cout<<x<<" ";
    else cout<<"1"<<" ";
 }
    return 0;
}