#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter Year :";
    cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100==0)
            cout << "It is not leap year";
        else
            cout << "It is leap year";
    }
    else
        cout << "It is not leap year";
    return 0;
}