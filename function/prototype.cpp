#include <iostream>
using namespace std;
void divide(int, int); //  function prototype
int main()
{
    // calling the function before declaration
    divide(10, 2);
    return 0;
}
// defining function
void divide(int a, int b)
{
    cout << (a / b);
}
