/* Program to print numbers using Backtracking*/

#include <iostream>
using namespace std;

int PrintNum(int i, int n)
{
    // Base Condition
    if (i < 1)
    {
        return 1;
    }
    PrintNum(i - 1, n);
    cout << i;
}

int main()
{
    int i, n;
    cin >> n;
    i = n;
    PrintNum(i, n);
}