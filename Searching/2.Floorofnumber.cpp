/*
@This program is to find out the floor of the number
@ which is the Greatert number which is equal to or smaller that target
*/

#include <bits/stdc++.h>
using namespace std;

int floorofnum(int arr[], int n, int k)
{
    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (k == arr[mid])
        {
            return mid;
        }
        else if (k > arr[mid])
        {
            l = mid + 1;
        }
        else if (k < arr[mid])
        {
            r = mid - 1;
        }
    }
    return r;
}

int main()
{
    int arr[] = {1, 2, 5, 3, 7, 38, 78};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = floorofnum(arr, n, 45);
    cout << ans << endl;
}