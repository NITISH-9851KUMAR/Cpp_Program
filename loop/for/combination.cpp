#include<iostream>
using namespace std;
int main(){
    int n,r;
    cout<<"Enter N :";
    cin>>n;
    cout<<"Enter R :";
    cin>>r;
    int factn=1;
    int factr=1;
    int factnr=1;
    for(int i=n;i>0;i--){ // give !n
        factn*=i;
    }
    for(int i=r;i>0;i--){// give !r
        factr*=i;
    }
    for(int i=(n-r);i>0;i--){ //give !(n-r)
        factnr*=i;
    }
    int combination=(factn)/((factr)*(factnr));
    cout<<"NcR:"<<combination;
    return 0;
}