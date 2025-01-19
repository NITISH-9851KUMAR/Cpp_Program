#include<iostream>
using namespace std;

void firstandlast(string s,char ch1,char ch2,int *p1,int *p2){

    for(int i=0;i<s.size();i++){
        if(s[i]==ch1){
           *p1=i+1;
            break;

        }
    }

    for(int i= s.size()-1; i>=0;i--){
        if(s[i]==ch2){
            *p2=i+1;
            break;
        }
    }

}

int main(){

    string s="Nitish kumar";
    char ch1='N';
    char ch2='r';
    int first=-1;
    int last =-1;


    // int *p1=&first;
    // int *p2=&last;
    firstandlast(s, ch1,ch2 ,&first , & last);
    cout<<first<<" "<<last<<endl;

    return 0;
}