#include<iostream>
using namespace std;
void great(int n){
    if(n==0) return ;//base code 
    cout<<n<<endl;
    great(n-1);
}
int main(){
    great(2);
    return 0;
}