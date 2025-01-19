#include<iostream>
using namespace std;
void process(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
}

int main(){
    
int arr[3]={12, 1, 5};
int n=3;
process(arr,3);

*(arr+1)=22;     // change value by the array of pointer
for(int i=0;i<3;i++){
    cout<<*(arr+i)<<" ";
}
return 0;
}