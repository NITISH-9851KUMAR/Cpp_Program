#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int size1 =sizeof(arr);// size 20
    int size2 =sizeof(arr[0]); // size 4
    int length=size1/size2;
    cout<<length;
    return 0;
}