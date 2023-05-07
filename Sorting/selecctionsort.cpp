/*This program is to do selection sort*/

#include <bits/stdc++.h>
using namespace std;

int selectionsort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            swap(a[i], a[min]);
        }
    }
}

int main()
{
    int a[] = {64, 34, 25, 12, 22, 11, 90}; //{10, 25, 1, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    selectionsort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}