/*This program is to find the smallest number greater than target*/

#include <bits/stdc++.h>
using namespace std;

int nextgreater(int arr[], int n, int k)
{
    int l = 0;
    int r = n - 1;
    while (l < r)
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
    return l;
}

int main()
{
    int arr[] = {0, 1, 2, 4, 9, 10, 12, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = nextgreater(arr, n, 8);
    cout << ans << endl;
}
