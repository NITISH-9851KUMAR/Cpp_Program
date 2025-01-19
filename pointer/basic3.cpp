#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;

    int *ptrx=&x;// store the address of x

    int *ptry=&y;// store the address of y

    int result ;
    int *ptr_result =&result ;
    *ptr_result=*ptrx+*ptry;

    // *ptr_result=*ptrx+*ptry
    // in result also *ptrx+*ptry, is store because in *ptr_result store the address of result 

    cout<<result<<"  "<<*ptr_result<<endl;
    return 0;
}