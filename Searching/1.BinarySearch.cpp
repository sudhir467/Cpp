/*This program is to implement Binary search in C++*/
/*To apply for binary search the array has to be sorted*/

#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int k)
{
    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        /*Formula to calculate mid*/
        int mid = l + (r - l) / 2;

        if (arr[mid] == k)
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

    return -1;
}

int main()
{
    int arr[] = {0, 25, 96, 112, 135, 168, 239, 340, 650};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = binarysearch(arr, n, 340);
    cout << ans << endl;
}