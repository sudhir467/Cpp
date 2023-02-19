/* Program to count the number of set bits*/

#include <iostream>
using namespace std;

int countsetbits(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        res = res + 1;
    }
    return res;
}

int main()
{
    cout << "Number of set bits are:" << countsetbits(7) << endl;
}