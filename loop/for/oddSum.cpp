#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number :";
    cin>>num;
    int sum=0;
    //1 3 5 7 9 11 13 15 17 19
    for(int i=1;i<=num;i+=2){
        sum+=i;
    }
    cout<<"Sum:"<<sum;
    return 0;
}