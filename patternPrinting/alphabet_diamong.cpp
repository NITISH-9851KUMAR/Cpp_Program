#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number :";
    cin>>num;
    int nst=1;
    int y=num+1;
    int nsp=num;
    for(int i=1;i<=(num*2+1);i++){
        //int z=64;
        char t=(char)65;
        for(int i=1;i<=nsp;i++){
            cout<<" ";
        }
        for(int j=1;j<=nst;j++,t++){
            cout<<t;
        }
     if(i<(y)){
        nsp--;
        nst+=2;
     }
     else {
        nsp++;
        nst-=2 ;

     }
    cout<<endl;
    }
    return 0;
}