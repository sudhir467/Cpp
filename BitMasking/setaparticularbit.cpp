/*This program is to set a particular bit*/

#include <iostream>
using namespace std;

int setbit(int n, int k)
{
    n |= (1 << k - 1);
    return n;
}

int main()
{
    cout << "After setting the bit: " << setbit(5, 2) << endl;
}