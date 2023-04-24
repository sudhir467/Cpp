/*
This program is to find the linear search of the given array
Time complexity will be O(n)
*/

#include <bits/stdc++.h>
using namespace std;

bool linearsearch(int arr[], int k, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {0, 1, 3, 4, 5, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 9;
    int ans = linearsearch(arr, k, n);
    cout << ans << endl;
}
