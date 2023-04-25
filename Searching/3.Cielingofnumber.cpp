/*This program is to find the ceiling of the number
 @ a closest number which is greater or eqaul to the given number
*/
#include <bits/stdc++.h>
using namespace std;

int ceilingofnumber(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (k == mid)
        {
            return mid;
        }
        else if (k > arr[mid])
        {
            start = mid + 1;
        }
        else if (k < arr[mid])
        {
            end = mid - 1;
        }
    }
    return start;
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = ceilingofnumber(arr, n, 8);
    cout << ans << endl;
}