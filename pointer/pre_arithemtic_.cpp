#include<iostream>
using namespace std;
int main(){
    int arr[2]={2,19};

    int *ptr=&arr[1];
      *ptr--; // one step back because decrement become on 2
    cout<<*ptr<<endl; // print 2

    --(*ptr); // now this become 2 and decrement  1 in element  
    // print 1;
    cout<<*ptr<<endl;




    return 0;
}