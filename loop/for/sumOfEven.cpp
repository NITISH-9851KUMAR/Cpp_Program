#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number :";
    cin >> n;
    int sum = 0;
    // 2 4 6 8 10 12 14 ....100
    int i = 2;
    for (;i<=n; i+=2){ // _; is called ommiting part hai uske gajah ham loop ke bahar bhi initilize kar sakte hai but semicolum(;) is need
        sum += i;
    }
    cout << "sum:" << sum;
    return 0;
}