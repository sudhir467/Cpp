/*This program is to move the zeros to the end in array*/

#include <bits/stdc++.h>
using namespace std;

/* This take T.C-O(n) and S.C- O(n)
int movezeros(int arr[], int n)
{
    int temp[n];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp[k] = arr[i];
            k++;
        }
    }

    while (k < n)
    {
        temp[k] = 0;
        k++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
}*/

/*TC- O(n), S.C=O(1)*/
int movetoend(int arr[], int n)
{

    int k = 0;
    int i = k;
    int j = k + 1;
    while (i < n && j < n)
    {
        if (arr[j] != 0)
        {
            /*/ int temp = arr[i];
             arr[i] = arr[j];
             arr[j] = temp;*/
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {0, 1, 2, 3, 0, 0, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    movetoend(arr, n);
}