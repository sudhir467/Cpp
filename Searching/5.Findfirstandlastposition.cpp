/*This program is to find the first and last position of the numbers in array*/

#include <bits/stdc++.h>
using namespace std;

int first(int arr[], int n, int k)
{
    int l = 0;
    int r = n - 1;
    int res = -1;
    while (l <= r)
    {
        int mid = (l + (r - l) / 2);
        if (k > arr[mid])
        {
            l = mid + 1;
        }
        else if (k < arr[mid])
        {
            r = mid - 1;
        }
        else
        {
            res = mid;
            r = mid - 1;
        }
    }
    return res;
}
int last(int arr[], int n, int k)
{
    int l = 0;
    int r = n - 1;
    int res = -1;
    while (l <= r)
    {
        int mid = (l + (r - l) / 2);
        if (k > arr[mid])
        {
            l = mid + 1;
        }
        else if (k < arr[mid])
        {
            r = mid - 1;
        }
        else
        {
            res = mid;
            l = mid + 1;
        }
    }
    return res;
}

int main()
{
    int arr[] = {1, 2, 2, 2, 2, 2, 2, 7, 8, 8, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    cout << "first occurence:" << first(arr, n, k) << endl;
    cout << "last occurence:" << last(arr, n, k) << endl;
    return 0;
}
