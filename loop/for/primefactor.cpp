#include<iostream>
using namespace std;
int main(){
    int num,x;
    cout<<"Enter Number :";
    cin>>num;
    x=num;
    for(int i=2;i<=x;i++){
        if(num%i==0){
            cout<<i<<" ";
            num=num/i;
            i--;
         
        }
   
    }

    return 0;
}