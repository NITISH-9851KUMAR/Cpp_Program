#include<iostream>
using namespace std;
int main(){
    int x=5;
    int y=3;
    int *ptr=&x;
    
    // ptr=3 ; we cant do this as prt only sotres address nothing else 

    // *ptr= &y ; this wont work as wwe cannot store address in an int bucket

    cout<<&ptr<<endl; // prints the address of the ptr bucket not the address stored in ptr
    return 0;
}