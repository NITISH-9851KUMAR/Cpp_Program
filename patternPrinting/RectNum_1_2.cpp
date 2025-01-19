#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Number :";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num * 2 - 2; j++)
        {
            if ((i + j) % 2 == 0)
                cout << "1";
            else
                cout << "2";
        }
        cout<<endl;
    }
    return 0;
}