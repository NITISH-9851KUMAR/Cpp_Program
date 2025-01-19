#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    

}
int main(){
    int x=10;
    int y=34; 

    cout<<"x :"<<x<<" "<<"y:"<<y<<endl;
    
    swap(&x,&y);// function for swap 
    cout<<"value after change "<<endl;
    cout<<"x :"<<x<<" "<<"y:"<<y;

return 0;
}