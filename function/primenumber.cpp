#include<iostream>
using namespace std;
int primenumber(int x){
    
    for(int i=2;i<=x;i++){
        if(x%i==0){
            cout<<i<<" ";
            x/=2;
            i--;
        }
    }
}
int main(){
    int num;
    cout<<"Enter Number :";
    cin>>num;
    cout<<"prime factor :";
    primenumber(num);
    return 0;
}