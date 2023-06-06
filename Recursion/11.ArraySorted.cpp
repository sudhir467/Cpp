/*This program is to check whether the array is sorted using recursion*/

#include <iostream>
using namespace std;

bool issorted(int arr[],int  n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingpart = issorted(arr + 1, n - 1);
        return remainingpart;
    }
}

int main()
{
    int arr[] = {2, 13, 5, 6, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool ans = issorted(arr, n);
    cout << "whether array is sorted:" << ans << endl;
}