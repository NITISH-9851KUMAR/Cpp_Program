#include<iostream>
using namespace std;
int main(){
    int n,r;
    cout<<"Enter N :";
    cin>>n;
    cout<<"Enter R :";
    cin>>r;
    int product_n=1;
    for(int i=n;i>0;i--){// This loop give !n
        product_n*=i;
    }
    int product_nr=1;
    for(int i=(n-r);i>0;i--){
        product_nr*=i;
    }
    int permutation=product_n/product_nr;
    cout<<"NpR :"<<permutation;
    return 0;
}