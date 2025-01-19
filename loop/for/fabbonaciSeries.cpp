#include <iostream>
using namespace std;
int main()
{
    int num, a, b, sum;
    a = 1, b = 1;
    cout << "Enter Your Term :";
    cin >> num;
    cout << "fabbonaci series :";
    if (num == 1 || num == 2)
    {
        cout << a;
    }

    else
    {
        cout << a << " " << b;
        for (int i = 1; i <= num - 2; i++)
        {
            sum = a + b;
            a = b;
            b = sum;
            cout << " " << sum;
        }
    }

    return 0;
}