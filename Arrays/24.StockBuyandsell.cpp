/*This program is to calculate the max differnce between buy and sell*/

#include <bits/stdc++.h>
using namespace std;

/* TC=O(n*n),S-C=O(1)
int stockbuyandsell(int arr[], int n)
{
    int maxpro = INT_MIN;
    int maxdiff = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            maxdiff = arr[j] - arr[i];
            maxpro = max(maxpro, maxdiff);
        }

    }

    return maxpro;
}
*/

int stockbuyandsell(int arr[], int n)
{
    int maxpro = 0;
    int minprice = INT_MAX;
    for (int j = 0; j < n; j++)
    {
        minprice = min(minprice, arr[j]);
        maxpro = max(maxpro, arr[j] - minprice);
    }

    return maxpro;
}

int main()
{
    int arr[] = {7, 1, 3, 5, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = stockbuyandsell(arr, n);
    cout << k << endl;
}