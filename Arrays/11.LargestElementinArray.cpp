/*This program is to find the largest element in the array*/

/*
#include <bits/stdc++.h>
using namespace std;

int sortArr(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}

int main()
{
    vector<int> arr1 = {2, 5, 1, 3, 0};
    cout << "The largest element in the array is:" << sortArr(arr1) << endl;
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int findlargest(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {2, 5, 1, 3, 0};
    int n = 5;
    int max = findlargest(arr[], n);
    cout << "The largest element in array is:" << max << endl;
}
