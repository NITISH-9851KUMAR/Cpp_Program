#include <iostream>
using namespace std;
int add(int a, int b); // here use funciton for add 

int main()
{

    int x = 1, y = 4;
    int sum = add(x, y); //it is function defintion 
    cout << sum << endl;
    return 0;
}
int add(int a,int b){ //it is funciton 
    return a+b;
}