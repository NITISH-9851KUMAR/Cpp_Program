//count the number of triplets whose sum is equal to the given value x.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{1,2,3,4,5,6,7,8,9,10};
    int x=10;
    int pairs=0;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            for(int k=j+1;k<arr.size();k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                     pairs++;
                }
            }
            
        }
    }
    cout<<"pairs :"<<pairs;
    return 0;
}