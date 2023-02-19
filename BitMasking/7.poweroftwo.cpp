/*check whether the number is power of two*/

#include <iostream>
using namespace std;

bool poweroftwo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return ((n & (n - 1)) == 0);
}

int main()
{
    int n;
    cin >> n;
    if (poweroftwo(n))
    {
        cout << "Power of two" << endl;
    }
    else
    {
        cout << "Not power of two" << endl;
    }
}