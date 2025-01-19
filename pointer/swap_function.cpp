#include<iostream>
using namespace std;
//here use pass by reference 
void swap(int& x, int& y){
    cout<<&x<<endl;
    int temp=x;
    x=y;
    y=temp;
}

int main(){

    int x=4;
    int y=6;
    cout<<&x<<endl;
    cout<<"x :"<<x<<" "<<"Y :"<<y<<endl;

    swap(x,y);
    cout<<"x :"<<x<<" "<<"Y :"<<y<<endl;
   
    return 0; 
}