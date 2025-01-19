#include<iostream>
using namespace std;
int main(){
    int num;
   cout<<"Enter Number That you want AP:";
   cin>>num;
   int a=2;
   for(int i=1;i<=num;i++){
    cout<<" "<<a;
    a+=2;
   }
    return 0;
}