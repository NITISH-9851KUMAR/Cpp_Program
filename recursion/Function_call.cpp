#include<iostream>
using namespace std;
void great(){
    cout<<"Hello";
    great();
}

int main(){
    great();
    return 0;
}