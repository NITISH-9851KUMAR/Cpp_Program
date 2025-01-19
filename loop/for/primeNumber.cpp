#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number :";
    cin>>num;
    bool flag =true;
    for(int i=2;i<num;i++){
        if(num%i==0){
            flag =false;
            break;
    }
    }
    if(num==0) cout<<num<<"-> neither prime number nor composite number ";
    else if(flag ==true) cout<<num <<"-> prime number";
    else cout<<num<<"-> composite number ";
    
    return 0;
}
