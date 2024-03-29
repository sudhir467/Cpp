/*This program is to find the peak in the mountain array i.e. finding max number in array*/

#include <bits/stdc++.h>
using namespace std;

int peakelement(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int arr[] = {1, 2, 5, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = peakelement(arr, n);
    cout << "Peak element:" << ans << endl;
    return 0;
}