#include<iostream>
using namespace std;
int main(){
    
    int arr[]={1 ,2,3,7,4};
    int *ptr=(arr+2);
    cout<<*ptr<<endl;

    *ptr++;
    cout<<*ptr<<endl;
    *ptr--;
    cout<<*ptr<<endl;
    return 0;
}