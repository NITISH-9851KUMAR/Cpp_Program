#include<iostream>
using namespace std;
int main(){
    // 1-2+3-4+5-6+7-8........=-4
    int num;
    cout<<"Enter Number :";
    cin>>num;
    int evensum=0;
    int oddsum=0;
    //1-2+3-4+5-6+7 sum==4 (n=7terms )
    for(int i=1;i<=num;i++){
        if(i%2==0)
        evensum+=i;
        else oddsum+=i;
    }
    int sum=oddsum-evensum;
    cout<<sum;
    return 0;
}