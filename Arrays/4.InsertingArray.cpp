/* This program is to do insertion in an array at initial, any position, last position*/

#include <iostream>
using namespace std;

int main()
{

    int n = 5, i;
    int a[n] = {0, 1, 2, 3, 4};
    /*This code is to insert at beginning
    for( i=n-1;i>=0;i--)
    {
        a[i+1]=a[i];

    }
    a[0]=10;
    n++;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }*/
    
    /*This code is for inserting at specific position
    int pos = 3;
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos -1]=10;
    n++;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }*/
    
    /*THis code is to insert at the last*/
    int num=10;
    a[n]=num;
    n++;
    for(i=0;i<n;i++)
    {
    cout<<a[i]<<endl;
    }

}