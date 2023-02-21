/* Program to print the numbers from N to 1 using recursion*/

#include <iostream>
using namespace std;

int printNto1(int i, int n)
{
    // Base condition
    if (i < 1)
    {
        return 1;
    }
    cout << i;
    printNto1(i - 1, n);
}

int main()
{
    int i, n;
    cin >> n;
    i=n;
    printNto1(i, n);
}