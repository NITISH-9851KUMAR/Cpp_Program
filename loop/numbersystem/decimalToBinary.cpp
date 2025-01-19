#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Decimal Number :";//this form 304
    cin>>num;
    int x=num;
    int ans=0;
    int power =1;
    int paritydigit;
    while(num!=0){
        
        paritydigit=num%2;
        ans+=paritydigit*power;
        power*=10;
        num/=2;

    }
    cout<<"Decimal Number :"<<x<<endl;
    cout<<"Binary Number :"<<ans<<endl;
    return 0;
}