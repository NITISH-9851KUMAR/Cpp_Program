//what if there exists a local variable with the same
//name as that of the global variable inside a function
#include <iostream>
using namespace std;
int p = 5;// this is gloabl variable 
int main()
{
    int p=1;// local vairable 
    cout<<p<<endl;// print local variable value 
    cout <<:: p; //  print global variable value 
    //(::) -> scope resolution 
    //we use the scope resolutin print-> global variable 
    return 0;
}