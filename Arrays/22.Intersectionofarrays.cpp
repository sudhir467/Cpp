/*This program is to print the intersection of two arrays*/

#include <bits/stdc++.h>
using namespace std;

int intersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr2[j] > arr1[i])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            cout << arr2[j]<<" ";
            i++;
            j++;
        }
    }
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7};
    int arr2[] = {4, 6, 7, 8, 9, 10, 11};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    intersection(arr1, arr2, m, n);
    return 0;
}