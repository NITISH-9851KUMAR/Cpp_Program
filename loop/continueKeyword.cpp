//print all the values between 1 and 50 except to the multiples of 3
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<=50;i++){
        if(i%3==0)continue;
        cout<<i<<" ";
    }

    return 0;
}