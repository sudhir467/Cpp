/*This program is to find one odd occuring number in an array*/

#include <iostream>
using namespace std;

int findodd(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    return res;
}

int main()
{
    int arr[] = {4, 4, 7, 4, 8, 7, 7, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findodd(arr, n) << endl;
}