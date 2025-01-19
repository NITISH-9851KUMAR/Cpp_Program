#include<iostream>
using namespace std;
int main(){

int arr[5]={4,1,0,6,-5};
int mx=__WINT_MIN__;
for(int i=1;i<5;i++){
 mx =max(mx,arr[i]);//using function  
    }

cout<<mx;
return 0;
}