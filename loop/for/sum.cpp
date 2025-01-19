#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number :";
    cin>>num;
    int sum=0;
    // 1 2 3 4 5 6 7 8....
    for(int i=1;i<=num;i++){
        sum+=i;
    }
    cout<<"Sum:"<<sum;
    return 0;

}