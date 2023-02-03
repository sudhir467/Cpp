/*Program to find the factorial of number*/
#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int num;
    cout << "Enter the number:" << endl;
    cin >> num;
    int fact = factorial(num);
    cout << fact << endl;
}