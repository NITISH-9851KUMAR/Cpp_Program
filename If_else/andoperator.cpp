#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter Number:";
    cin >> x;
    if (x % 2 == 0 && x % 5 == 0)
        cout << x << " is divisile by 2 and 5";
    else
        cout << x << " is not divisible 2 and 5";
    return 0;
}
