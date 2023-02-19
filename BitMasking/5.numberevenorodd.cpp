/* Find out whether the number is even or odd*/

#include <iostream>
using namespace std;

void evenodd(int n)
{
    if (n & 1)
    {
        cout << "The number is odd" << endl;
    }
    else
    {
        cout << "The number is even" << endl;
    }
}

int main()
{
    evenodd(8);
}