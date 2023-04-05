/*This program is to demonstrate deletion of elements in array at beginning,positiongiven,at end*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5, i;
    int a[n] = {0, 1, 2, 3, 4};

    /*This program to del from the beginning*/
    /*for(i=0;i<=n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    */

    /*This program is to delete from the position of array*/
    /* int pos=3;
     for(i=pos-1;i<=n;i++)
     {
      a[i]=a[i+1];
     }
     n--;
     for(i=0;i<n;i++)
     {
      cout<<a[i]<<endl;
     }*/

    /*This program is to delete from the ending*/
    for (i = n-1;i<=0; i--)
    {
        a[i] = a[i+1];
    }
    n--;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}