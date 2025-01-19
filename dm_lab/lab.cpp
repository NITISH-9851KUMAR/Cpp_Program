#include <iostream>
using namespace std;
int main()
{
    int c[10], n1, n2, i, j, k = 0;
    int a[10] = {1, 1, 2};
    int b[10] = {2, 3, 4};

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (c[j] == a[i])
                break;
        }
    if (j == k)
        {
            c[k] = a[i];
            k++;
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<k;j++){
            if(c[j]==b[i])
            break;
        }
    if(j==k){
        c[k]=b[i];
    }
    }

    return 0;
}