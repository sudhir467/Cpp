/*This program is to clear a set bit*/

#include <iostream>
using namespace std;

int clearbit(int n, int k)
{
    n &= ~(1 << k - 1);
    return n;
}

int main()
{
    cout << "After clearing the bit:" << clearbit(7, 3) << endl;
}
