#include<iostream>
using namespace std;
int main(){
int x=3;
int y=5;
cout<<x<<" "<<y<<endl;
x=x+y;//x=8
y=x-y;//8-5=3
x=x-y;//8-3
x=x+y;  
cout<<x<<" "<<y<<endl;
    return 0;
}