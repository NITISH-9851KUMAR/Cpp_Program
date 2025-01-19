// find the total number of pairs in the Array whose sum is equal to the given value x.
#include<iostream>
//#include<vector>
using namespace std;
int main(){
    int arr[]={2,6,8,5,7,4,3};
    int x=7;
    int pairs=0;

for(int i=0;i<8;i++){
    for(int j=i+1;j<8;j++){
        if(arr[i]+arr[j]==x){
        cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        pairs++;
        }
    }

}
cout<<"pairs:"<<pairs;
      
return 0;
}