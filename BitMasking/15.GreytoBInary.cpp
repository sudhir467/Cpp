/*This program is to find the binary representation of grey number*/

#include <iostream>
using namespace std;

int greytobinary(int n)
{
    int res = n;
    while (n > 0)
    {
        n = n >> 1;
        res = res ^ n;
    }
    return res;
}

int main()
{
    cout << greytobinary(4) << endl;
}