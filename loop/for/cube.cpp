#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter Base :";
    cin>>x;
    cout<<"Enter Power :";
    cin>>y;
    int power=1;
    for(int i=1;i<=y;i++){
        power*=x;
    }
    cout<<x<<" rest to the power "<<y<<":  "<<power;
    return 0;
}