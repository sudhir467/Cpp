/*Finding the power set using bitwise operators*/

#include <iostream>
using namespace std;

void print Powerset(string s[])
{
    int n = s.length();
    int psize = (1 << n);
    for (i = 0; i < psize; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (i << j) != 0)
            {
                cout << s[j];
            }
        }
        cout << endl;
    }
}