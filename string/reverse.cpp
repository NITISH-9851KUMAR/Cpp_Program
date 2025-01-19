#include <iostream>
#include<vector>
#include <string>
using namespace std;

int main()
{

    string n = "tinish";

    // reverse string first place to 3rd place 
    int i = 0;
    int j = n.length() - 4;
    while (i < j)
    {
        char temp = n[i];
        n[i] = n[j];
        n[j] = temp;
        i++;
        j--;
    }
    cout << n << endl;

    return 0;
}