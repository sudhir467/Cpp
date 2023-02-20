/* This program is to count the number of bits to be changed such that m can be turned to n*/

#include <iostream>
using namespace std;

int bitdifference(int m, int n)
{
    // Different bits present
    int x = m ^ n;
    // Now count the bits
    int res = 0;
    while (x > 0)
    {
        x = x & (x - 1);
        res = res + 1;
    }
    return res;
}

int main()
{
    cout << bitdifference(20, 40) << endl;
}