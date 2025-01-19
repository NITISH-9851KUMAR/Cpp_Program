#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 5, 3, 22, 27};
    int max = __WINT_MIN__;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;

    return 0;
}