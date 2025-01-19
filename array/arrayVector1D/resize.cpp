#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(2);
    int arr[5] = {1, 2, 3, 4, 5};

    v.pop_back();
    cout<<v.size();
    for (int element : arr)
    {
        cout << element << " ";
    }
    return 0;
}