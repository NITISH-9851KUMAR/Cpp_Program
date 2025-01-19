#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    printf("\n\n");

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++) // loop for print N

        {
            int a = 1;
            if (j == 5 || i == j || j == 1)
                printf("*");
            else
                printf(" ");
        }

        for (int k = 1; k <= n; k++) // print spaces
        {
            if (k == 1 || k == 2)
                printf(" ");
        }

        for (int k = 1; k <= n; k++) // loop for print I
        {
            if (k == 3 || (i == 1 && k==2)||(i == 1 && k==4)||
            (i == 5 && k==2)|| (i == 5 && k==4))
                printf("*");
            else
                printf(" ");
        }

        for (int k = 1; k <= n; k++) // print spaces
        {
            if (k == 1 || k == 2)
                printf(" ");
        }

        for (int t = 1; t <= n; t++) // loop for print T
        {
            if (i == 1 || t == 3)
                printf("*");
            else
                printf(" ");
        }

        for (int k = 1; k <= n; k++) // print spaces
        {
            if (k == 1 || k == 2)
                printf(" ");
        }

          for (int k = 1; k <= n; k++) // loop for print I
        {
            if (k == 3 || (i == 1 && k==2)||(i == 1 && k==4)||
            (i == 5 && k==2)|| (i == 5 && k==4))
                printf("*");
            else
                printf(" ");
        }

        for (int k = 1; k <= n; k++) // print spaces
        {
            if (k == 1 || k == 2)
                printf(" ");
        }

        for (int m = 1; m <= n; m++) // loop for print S
        {
            if(i==1||i==3||i==5||(i==2&&m==1)||(i==4&&m==5))
            cout<<"*";
                  else
                        printf(" ");
        }

        for (int k = 1; k <= n; k++) // print spaces
        {
            if (k == 1 || k == 2)
                printf(" ");
        }

        for (int l = 1; l <= n; l++) // loop for print H

        {
            if (l == 1 || l == 5 || i == 3)
                cout<<"*";
            else
                printf(" ");
        }
        
        printf("\n");
    }
    printf("\n\n\n");
   
    return 0;

}
