/*In this program do linear search using recursion*/

#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int key)
{
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool other = linearsearch(arr + 1, n - 1, key);
        return other;
    }
}

int main()
{
    int arr[] = {3, 4, 5, 6, 8, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 50;
    int ans = linearsearch(arr, n, key);
    cout << "Whether the element is found:" << ans << endl;
}