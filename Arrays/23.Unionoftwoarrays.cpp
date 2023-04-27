/*This program is to print the Union of two sorted arrays*/

#include <bits/stdc++.h>
using namespace std;

int unionoftwo(int arr1[], int arr2[], int m, int n)
{
    int i = 0;
    int j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            cout << arr2[j] << " ";
            j++;
        }
        else
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }

    while (i < m)
    {
        cout << arr1[i] << " ";
        i++;
    }

    while (j < n)
    {
        cout << arr2[j] << " ";
        j++;
    }
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {2, 4, 5, 7};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    unionoftwo(arr1, arr2, m, n);
    return 0;
}
