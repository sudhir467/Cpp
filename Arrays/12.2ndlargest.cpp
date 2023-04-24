/*This program is to find the second largest and second smallest element in the array*/

#include <bits/stdc++.h>
using namespace std;

/*This one has time complexity O(nlogn)*/
/*int getelements(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        cout << -1 << " " << -1 << endl;
    }
    sort(arr, arr + n);
    int small = arr[1];
    int large = arr[n - 2];
    cout << "second smallest element is:" << small << endl;
    cout << "second largest element is :" << large << endl;
}

int main()
{
    int arr[] = {1, 2, 4, 6, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    getelements(arr, n);
    return 0;
}*/

/*This has time complexity of O(n)

int getelements(int arr[], int n)
{
    int slarge = INT_MIN;
    int large = INT_MIN;
    int ssmall = INT_MAX;
    int small = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        small = min(small, arr[i]);
        large = max(large, arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < ssmall && arr[i] != small)
            ssmall = arr[i];
        if (arr[i] > slarge && arr[i] != large)
            slarge = arr[i];
    }

cout << "second large is:" << slarge << endl;
cout << "second small is:" << ssmall << endl;
}

int main()
{
    int arr[] = {2, 4, 8, 9, 7, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    getelements(arr, n);
    return 0;
}
*/

int secondsmallest(int arr[], int n)
{
    if (n < 2)
        return -1;
    int ssmall = INT_MAX;
    int small = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            ssmall = small;
            small = arr[i];
        }
        else if (arr[i] < ssmall && arr[i] != small)
        {
            ssmall = arr[i];
        }
    }
    return ssmall;
}

int secondlargest(int arr[], int n)
{
    if (n < 2)
        return -1;
    int large = INT_MIN;
    int slarge = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            slarge = large;
            large = arr[i];
        }
        else if (arr[i] > slarge && arr[i] != large)
        {
            slarge = arr[i];
        }
    }
    return slarge;
}

int main()
{
    int arr[] = {1, 5, 9, 7, 3, 8, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ss = secondsmallest(arr, n);
    int sl = secondlargest(arr, n);
    cout << "secondlargest is: " << sl << endl;
    cout << "secondsmallest is:" << ss << endl;
}
