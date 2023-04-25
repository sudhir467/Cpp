/*This program is to left rotate an array by D places */

#include <bits/stdc++.h>
using namespace std;

/*This function uses time complexity of O(n+d),space complexity of O(d)
int leftrotate(int arr[],int n, int d)
{
    int temp[d]={0};
    for(int i=0;i<d;i++)
    {
     temp[i]=arr[i];
    }
    for(int i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<=n;i++)
    {
        arr[i]=temp[i-(n-d)];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}*/
/*The time complexity is O(2*n), space complexity is O(1)*/
int leftrotate(int arr[], int n, int d)
{
    if (n == 0)
    {
        return -1;
    }
    d = d % n;
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}

int main()
{
    int arr[] = {3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 3;
    leftrotate(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
