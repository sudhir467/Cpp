/* This program is to find the element is present in array or not*/

#include <iostream>
using namespace std;

int Search(int arr[], int n, int k)
{
    int i;
    for (i = 0; i <= n - 1; i++)
    {
        if (arr[i] == k)
        {
            cout << "Element found at index:" << i << endl;
            break;
        }
    }
    return 1;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    Search(arr, 5, 5);
}
