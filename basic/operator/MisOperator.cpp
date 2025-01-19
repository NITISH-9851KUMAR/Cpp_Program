#include <iostream>
using namespace std;
int main()
{
    int a = 2;                 // integer have 4 bite
    cout << sizeof(a) << endl; // sizeof operator

    char c = 'a'; // character have 1 bite
    cout << sizeof(c) << endl;

    cout << (&a) << endl; // & address operator

    bool flag;
    2 == 3 ? flag = true : flag = false; // ternerary operator
    cout << flag;

    return 0;
}