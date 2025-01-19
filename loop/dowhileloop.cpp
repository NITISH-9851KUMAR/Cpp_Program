// Print the sum of the stream of N integers in the input using do-while loop
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;
    int sum=0;
    do{
        int num;
        cout<<"Enter Number:";
        cin>>num;
        sum+=num;
        n--;
    }while(n>0);
    cout<<sum<<endl;
    return 0;
}