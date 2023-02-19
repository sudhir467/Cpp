/*This program is to toggle a bit in a given number*/

#include <iostream>
using namespace std;

int togglebit(int n, int k)
{
    n ^= (1 << (k - 1));
    return n;
}

int main()
{
    cout << "After toggling the bit:" << togglebit(4, 1) << endl;
}