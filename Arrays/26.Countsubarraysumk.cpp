/*This program is to find the sub array whose sum is equal to k*/

#include <bits/stdc++.h>
using namespace std;

int subarraysumk(int arr[], int n, int target)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == target)
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    int arr[] = {3, 1, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int answer = subarraysumk(arr, n, 3);
    cout << answer << endl;
    return 0;
}