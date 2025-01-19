#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int num1, num2,num3, num4;
    cin >> num1;
    char op1,op2;
    cin >> op1;

    cin >> num2;
    switch (op1)
    {
    case '+':
        num3 = num1 + num2;
        break;

    case '-':
        num3 = num1 - num2;
        break;

    case '*':
        num3 = num1 * num2;
        break;

    case '/':
        num3 = num1 / num2;
        break;

    case '%':
        num3 = num1 % num2;
        break;

    default:
        cout << "wrong sign";
    }

    cin >> op2;
    cin >> num4;
    switch (op2)
    {
    case '+':
        cout << num3 + num4;
        break;

    case '-':
        cout << num3 - num4;
        break;

    case '*':
        cout << num3 * num4;
        break;

    case '/':
        cout << num3 / num4;
        break;

    case '%':
        cout << num3 % num4;
        break;

    default:
        cout << "wrong sign";
    }
    return 0;
}