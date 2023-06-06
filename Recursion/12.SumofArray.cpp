/*This program is to find the sum of the elements in the array using recursion*/

#include <iostream>
using namespace std;

int getsum(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return arr[0];
    }

    int other = getsum(arr + 1, n - 1);
    int sum = arr[0] + other;
    return sum;
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = getsum(arr, n);
    cout << "The sum of Elements of array:" << ans << endl;
}