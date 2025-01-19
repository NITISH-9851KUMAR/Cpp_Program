// write a program for set theory find the union ,intersection,symmetric difference between two array
#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    int  i, c[25], j, k = 0;
    //here c is set 

    // for first matrix input 
    cout<<"Enter The size of 1st array :";
    cin>>n1;
    cout<<"Enter The element of 1st array :";
    int a[n1];//1 2 3 4 
    for(i=0;i<n1;i++){
        cin>>a[i];
    }
    cout<<endl;

    // second matrix input 
    cout<<"Enter The size of 2nd array :";
    cin>>n2;
    cout<<"Enter The element of 2nd array :";
    int b[n2];//1 1 2 
    for(i=0;i<n2;i++){
        cin>>b[i];
    }
    cout<<endl;


    //logic for calculate union

    //copy the element of set A in set C
    
    for ( i = 0; i<n1;i++)
    {
        for (j=0;j<k;j++)
        {
            if(c[j]==a[i])
            break;
        }
        if (j==k)
        {
            c[k]=a[i];
            k++;
        }
    }

    for ( i=0;i<n2;i++)
    {
        for (j=0;j<k;j++)
        {
            if (c[j]==b[i])
                break;
        }
        if (j == k)
        {
            c[k] = b[i];
            k++;
        }
    }

    cout<<"****** Ans of union *******"<<endl;
    for ( i = 0; i < k; i++)
    {
        cout<<c[i]<<" ";
    }

    return 0;
}