/*This program is to find if the array is sorted*/
/*Time Complexity -O(n)*/

#include <bits/stdc++.h>
using namespace std;

bool checksorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {2, 78, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << checksorted(arr, n) << endl;
}
