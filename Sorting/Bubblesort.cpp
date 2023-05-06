/*This program is to implement bubble sort */

#include <bits/stdc++.h>
using namespace std;

int bubblesort(int a[], int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0 ; j < n; j++)

        {
            if (a[j] > a[j + 1] )
            {
                //temp = a[j];
                //a[j] = a[j + 1];
                //a[j + 1] = temp;
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main()
{
    int a[] = {64, 34, 25, 12, 22, 11, 90};//{10, 25, 1, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    bubblesort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}