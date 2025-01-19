#include<iostream>
using namespace std;
int main(){
    int arr[2]={1,19};

    int *ptr=&arr[0]; // address of 1 

    cout<<*ptr<<endl; //  *ptr=1
    *ptr++; // in *ptr=1; but they increment so it becomes 19 becuase address increment increase 
    (*ptr)++; // *ptr++=19  but (*ptr)++ element increase so it become 20
   // cout<< *ptr++<<endl; //first print *ptr and increment 
    cout<<*ptr<<" "<<endl; // print 19
    cout<<*ptr<<" "<<endl; 

    //because int *ptr store the address of first index 0 but increment then ,they move second index 1
    return 0;
}   