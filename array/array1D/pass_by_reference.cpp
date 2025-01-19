#include<iostream>
using namespace std;
void change(int f[]){ //in array that by default pass by reference 
    f[0]=8;
}
int main(){
    
int arr[3]={1,2,3};

for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";
}
change(arr);
cout<<endl;
for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";
}

return 0;
}