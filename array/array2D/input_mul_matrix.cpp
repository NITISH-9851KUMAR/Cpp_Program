#include <iostream>
using namespace std;
int main()
{

    // first matrix
    int r1, c1;
    cout << "Enter Order of fisrt matrix:";
    cin >> r1 >> c1;
    int arr[r1][c1];
    cout << "Enter Element of first matrix :";
    // taking input first matrix
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> arr[i][j];
        }
    }

    // second matrix
    int r2, c2;
    cout << "Enter ordere of second matrix :";
    cin >> r2 >> c2;
    int brr[r2][c2];
    cout << "Etner element of second matrix :";
    // taking input for second matrix
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> brr[i][j];
        }
    }

    // check
    if (c1 != r2)
        cout << "Matrix multiplication is not possible ";

    else
    {
        // order of multiplication of new matrix
        int rs[r1][c2];

        // c1=coulumn of first matrix ,r2=row of second matrix
        // int col_row=c1=r2;

        // loop for multiplication
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                rs[i][j] = 0;
                // r1 row of arr , c2 coulumn of brr
                for (int k = 0; k < c1; k++)
                {
                    rs[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }

        cout << "The resultant of matrix " << endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << rs[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}