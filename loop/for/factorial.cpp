// find the factorial of given number 
#include<iostream>
using namespace std;
int main(){
    cout<<"<<<<<<This is for output>>>>>>>>>>>"<<endl;
    int x;
    cout<<"Enter Number :";
    cin>>x;
    int product=1;
    for(int i=x;i>0;i--){
            product=product*i;
    }
    cout<<x<<"!:"<<product;
    return 0;
}