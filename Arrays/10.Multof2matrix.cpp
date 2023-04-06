/*This program is to print multiplication of two matrices*/

#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {{2, 3, 4}, {3, 4, 5}, {5, 6, 7}};
    int b[3][3] = {{3, 4, 5}, {5, 6, 7}, {9, 8, 7}};
    int c[3][3] = {0};
    cout << "Mutiplication of two matrices is:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] * b[i][j];
            cout << c[i][j] << endl;
        }
        cout << "\n";
    }
}