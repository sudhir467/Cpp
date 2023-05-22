/*This program is to find the element in the sorted rotated array */

#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int s, int e, int k)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        /*Formula to calculate mid*/
        int mid = s + (e - s) / 2;

        if (arr[mid] == k)
        {
            return mid;
        }
        else if (k > arr[mid])
        {
            s = mid + 1;
        }
        else if (k < arr[mid])
        {
            e = mid - 1;
        }
    }

    return -1;
}

int pivotn(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
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

int searchinsorted(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int pivot = pivotn(arr, n);
    while (s < e)
    {
        if (key > arr[pivot] && key < arr[n - 1])
        {
            return binarysearch(arr, n, pivot, n - 1, key);
        }
        else
        {
            return binarysearch(arr, n, 0, pivot - 1, key);
        }
    }
}

int main()
{

    int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = searchinsorted(arr, n, 10);
    cout << ans << endl;
    return 0;
}