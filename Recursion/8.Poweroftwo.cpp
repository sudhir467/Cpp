/*This program is to print the power of two using recursion*/

#include <iostream>
using namespace std;

int power(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return 2 * power(n - 1);
}

int main()
{
    int n=10;
    int ans = power(n);
    cout << "power of two when n=" << n <<" is:"<< ans << endl;
}