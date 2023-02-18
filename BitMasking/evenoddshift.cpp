/* Trying to find whether given number is even odd using shift operator*/

#include <iostream>
using namespace std;

void evenodd(int n)
{
    int calnum = ((n >> 1) << 1);
    if (calnum == n)
    {
        cout << "Entered number is even" << endl;
    }
    else
    {
        cout << "Entered number is odd" << endl;
    }
}

int main()
{
    evenodd(7);
}