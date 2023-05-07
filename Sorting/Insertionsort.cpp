/*This program is to do insertion sort*/

#include <bits/stdc++.h>
using namespace std;

int insertionsort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}

int main()
{
    int a[] = {64, 34, 25, 12, 22, 11, 90}; //{10, 25, 1, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    insertionsort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}