#include<iostream>
using namespace std;

int fabo(int n){
    if(n==1||n==2) return 1;
    return fabo(n-1)+fabo(n-2);
}
int main(){
    
int n;
cout<<"Enter a Term :";
cin>>n;
cout<<"Term of Faboncci Number :";
cout<<fabo(n);
return 0;
}