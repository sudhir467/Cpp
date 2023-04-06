/*This program is print the sum of two matrices*/

#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {{1, 2, 3}, {2, 3, 4}, {34, 4, 5}};
    int b[3][3] = {{1, 2, 3}, {2, 3, 4}, {23, 4, 5}};
    int c[3][3] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] ;
        }
        cout<<"\n";
    }
}