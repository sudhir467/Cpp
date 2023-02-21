/*Program to find the factorial of a number*/

#include <iostream>
using namespace std;

int factorial(int n)
{
    // Base condition
    if (n < 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
}