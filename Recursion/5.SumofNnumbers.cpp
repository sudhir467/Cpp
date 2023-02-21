/* Program to print sum of first N numbers*/

#include <iostream>
using namespace std;

int SumofNum(int n)
{
    // Base condition
    if (n < 1)
    {
        return 0;
    }
    return n + SumofNum(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << SumofNum(n) << endl;
}
