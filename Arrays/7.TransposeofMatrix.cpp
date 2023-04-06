/*This program is to find the transpose of given matrix*/

#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {{1, 0, 2}, {3, 4, 5}, {9, 8, 7}};
    cout << "The transpose of the matrix given is :" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[j][i];
        }
        cout<<"\n";
    }
}