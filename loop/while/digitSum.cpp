#include <iostream>
using namespace std;
int main()
{
    int num, lastdigit;
    cout << "Enter Number :";
    cin >> num;
    int sum = 0;
    while (num != 0)
    {
        lastdigit = num % 10;
        sum += lastdigit;
        num /= 10;
    }
    cout << "sum of digit :"<<sum;
    return 0;
}