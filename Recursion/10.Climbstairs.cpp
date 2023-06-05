/*This program is to calculate the count number of ways to reach nth stair*/
#include <iostream>
using namespace std;

int climbstairs(int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }

    int ans = climbstairs(n - 2) + climbstairs(n - 1);
}

int main()
{
    int numberofstairs = 3;
    int ans = climbstairs(numberofstairs);
    cout << "Number of ways:" << ans << endl;
}