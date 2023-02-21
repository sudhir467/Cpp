/* This program is to print the name N times using recursion*/

#include <iostream>
using namespace std;

int funcName(int i, int n)
{
    // Base condition
    if (i > n)
    {
        return 1;
    }
    cout << "SudhirBorra" << endl;
    funcName(i + 1, n);
}

int main()
{
    int i = 1, n;
    cin >> n;
    funcName(i, n);
}