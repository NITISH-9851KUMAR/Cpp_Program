#include <iostream>
using namespace std;

int fact(int t)
{
    int fact = 1;
    for (int i = 1; i <= t; i++)
    {
        fact *= i;
    }
    return fact; 
}
int ncr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{

    int num;
    cout << "enter the Number : ";
    cin >> num;
  
    int  nsp=num;
    for (int i = 0; i<=num; i++)
    {
        for (int j = 0; j <nsp; j++)//loop print spaces
        {
            cout <<" ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << ncr(i, j) << " ";
        }
        nsp--;
        cout << endl;
    }

    return 0;
}
