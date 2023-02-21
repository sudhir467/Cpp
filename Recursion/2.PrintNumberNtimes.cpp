/* Program to print the number n times linearly*/

#include <iostream>
using namespace std;

int PrintNum(int i, int n)
{
    // Base condition
    if (i > n)
    {
        return 1;
    }
    cout << i << " ";
    PrintNum(i + 1, n);
}

int main()
{
    int i = 1, n;
    cin >> n;
    PrintNum(i, n);
}