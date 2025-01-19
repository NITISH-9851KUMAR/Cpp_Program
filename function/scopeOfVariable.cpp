#include<iostream>
using namespace std;
int main(){
    int p=4;
    int x=1;
    for(int i=1;i<=x;i++){
        // here p is inside of forloop fucntion his scope is under the for loop
        float p=4.33;
        cout<<p;
    }
    // here x is another p his scope is inside of main function
    cout<<p;
    return 0;
}