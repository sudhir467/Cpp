/*This program is to print the sum of elements of 2D array*/

#include <iostream>
using namespace std;

int main()
{
    int a[3][3], i, j, sum = 0;
    cout<<"Enter the elements of 2D array:"<<endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i <3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a[i][j];
            sum = sum + a[i][j];
        }
    }
    cout << "The sum of all elements is:" << sum << endl;
}
