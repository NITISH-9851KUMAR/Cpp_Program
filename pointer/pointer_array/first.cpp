#include<iostream>
using namespace std;
int main(){

    int arr[3]={15,12,6};

    int *ptr=&arr[0];

    cout<<*(arr+0 )<<" "<<*(arr+1)<<"  "<<*(arr+2)<<endl;
    // pint      15              12               6

    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<" ";
    }
    return 0;
}