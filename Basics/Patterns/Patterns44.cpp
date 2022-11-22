/*This program is to print the following pattern
    1
   212
  32123
 4321234
543212345
*/

#include <iostream>
using namespace std;

int main()
{
    int rows,cols,spaces, l;
    
    for (rows = 1;rows <= 5; rows++)
    {
        for (spaces = 5; spaces > rows; spaces--)
        {
            cout<<" ";
        }
        for (cols = rows; cols >= 1; cols--)
        {
            cout<<cols;
        }
        for (l = 2; l <= rows; l++)
        {
            cout<<l;
        }
        cout<<endl;
    }

}
