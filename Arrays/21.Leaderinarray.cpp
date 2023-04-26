/*This program is to print the leader in array*/
#include <iostream>
using namespace std;

/*TC-O(n*n), S.C-O(1)*/

/*void printleaders(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j;
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] <= arr[j])
                break;
        }
        if (j == size) // the loop didn't break
            cout << arr[i] << " ";
    }
}*/

void printleaders(int arr[], int size)
{
    int max_from_right = arr[size - 1];
    cout << max_from_right << " ";
    for (int i = size - 2; i >= 0; i--)
    {
        if (max_from_right < arr[i])
        {
            max_from_right = arr[i];
            cout << max_from_right << " ";
        }
    }
}

int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printleaders(arr, n);
    return 0;
}
