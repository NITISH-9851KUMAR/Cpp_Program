#include<iostream>
using namespace std;
int main(){
//if we want to now a pointer variable, which is just declared but will get address later to store .
// then we can use null pointer .

int *ptr=0;//null pointer
int x=20;

ptr=&x;// we can also use some time latter null pointer ,basically null pointer use in this cases 
cout<<*ptr<<endl;
return 0;
}