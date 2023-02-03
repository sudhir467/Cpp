/*Program to check whether number is prime of not
return 0 = prime number,return 1= not a prime number
*/

#include <iostream>
using namespace std;

bool isprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    if (isprime(n))
    {
        cout << "is a prime number " << endl;
    }
    else
    {
        cout << "Not a prime number" << endl;
    }
}