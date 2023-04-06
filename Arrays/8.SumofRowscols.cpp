/*This program is to calculate the sum of individual rows and columns*/

#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int SR = 0, SC = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            SR = SR + a[i][j];
            SC = SC + a[j][i];
        }
    }
    cout << "The sum of individual rows and columns are:" << SR << " " << SC << endl;
}