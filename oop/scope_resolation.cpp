// C++ program to show that we can access a global variable
// using scope resolution operator :: when there is a local 
// variable with same name 
#include<iostream> 
using namespace std;

int x1=8; // Global x

int main()
{
int x = 10; // Local x
cout << "Value of global x is " << x1;
cout << "\nValue of local x is " << x; 
return 0;
}
