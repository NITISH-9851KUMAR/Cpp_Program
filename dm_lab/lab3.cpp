//write a program to find the combination and permutation of given two number 
#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n,r,ncr,npr;
    cout<<"Enter value of N:";
    cin>>n;
    cout<<"Enter value of R:";
    cin>>r;
    ncr=factorial(n)/(factorial(n-r)*factorial(r));
    npr=factorial(n)/factorial(n-r);
    cout<<"The combination value of  "<<n<<"c"<<r <<" -> "<< ncr<<endl;
    cout<<"The permutation value of  "<<n<<"p"<<r <<" -> "<< npr;

    

    return 0;
}