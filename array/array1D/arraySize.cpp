#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};// five element each element are memory allocate 4 bytes
    int size= sizeof(arr);//5*4=20;
    cout<<size;
    return 0;
}