//sorted -> element are increase order or decrease order
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 4, 3, 4, 5,6};
    bool flag = true;
    for (int i = 1; i < 6; i++)
    {
        if (arr[i] <= arr[i - 1])
            flag = false;
    }
    if(flag==1) cout<<"This is sorted";
    else   cout<<"This is not sorted";
    return 0;
}