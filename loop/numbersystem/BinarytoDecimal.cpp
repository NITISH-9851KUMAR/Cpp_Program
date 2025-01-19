// program for convert binary to decimal 
#include<iostream>
using namespace std;
int main(){
   int number;
   cout<<"Enter The number :";
   cin>>number;

   int power=1;
   int ans=0;
   while(number!=0){
    int lstdgt=number%10;
    ans+=lstdgt*power;
    power*=2;
    number/=10;
    }


    cout<<ans<<endl;
    return 0;
}
