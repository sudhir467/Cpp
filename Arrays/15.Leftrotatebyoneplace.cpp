/*This program is to left rotate an array by one place*/

#include <bits/stdc++.h>
using namespace std;

int rotatearr(int arr[], int n)
{
    int temp = 0;
    temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    rotatearr(arr, n);
}