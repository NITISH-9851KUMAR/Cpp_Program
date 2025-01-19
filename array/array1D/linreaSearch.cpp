// search if a given element is present in the array or not. if 
//it is not present return  -1 else return index;
#include<iostream>
using namespace std;
int main(){
    int arr[5]={11,2,12,13,15};
    int search=11;
    bool flag =false ;
    for(int i=0;i<5;i++){
        if(arr[i]==search){
           flag =true ;
            break;
        }
        
    }
    if (flag ==true) cout<<"yes 11 is present in the array";
    else cout<<"not found ";
    return 0;
}

