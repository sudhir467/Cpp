/*This program is to count the number of even and odd elements*/

#include <iostream>
using namespace std;

int main()
{
    int a[10];
    int even = 0; int odd = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            even = even + 1;
        }
        else
        {
            odd = odd + 1;
        }
    }
    cout << "Number of even elements are:" << even << endl;
    cout << "Number of odd elements are:" << odd << endl;
}