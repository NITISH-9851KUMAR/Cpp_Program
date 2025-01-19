#include<iostream>
using namespace std;

int main(){

    int x=8;
    int *pt1=&x;

    double y=23.5;
    double *pt2=&y;

    cout<<sizeof(x)<<endl;
    cout<<sizeof(y)<<endl;

    cout<<pt1 <<" "<<(pt1++)<<endl; // arithmetic operator add 4 address of x ,becaue sizeof y is 4 
    //cout<<pt2 <<" "<<(pt2++)<<" "<<(pt2+3)<<" "<<(pt2-2)<<endl; //add 8 in address of y ,because sizeof x is 8 
    return 0;
}