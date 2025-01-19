#include<iostream>
using namespace std;
int main(){
    char arr[5];
    // this loop for input
    for(char &element:arr){// &element -> belong to take input 
        cin>>element;
    }
    // this loop for output
    for(char element:arr){// element ->belong to index 
        cout<<element<<" ";
        
    }
    return 0;
}