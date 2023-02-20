/* Program to find two odd occuring number in array*/

#include <iostream>
using namespace std;

// Naive solution
int twooddoccuring(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int arr[] = {5, 8, 7, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    twooddoccuring(arr, n);
    return 0;
}