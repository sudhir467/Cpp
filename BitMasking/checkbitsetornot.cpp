/* This program is to find out whether a particular bit is set or not*/

#include <iostream>
using namespace std;

void isbitset(int n, int k)
{
    int mask = 1 << (k - 1);
    if (n & mask)
    {
        cout << "The bit is set" << endl;
    }
    else
    {
        cout << "The bit is not set" << endl;
    }
}

int main()
{
    isbitset(13, 3);
}
