/*This program is to print the following pattern
    1
   121
  12321
 1234321
123454321

*/

#include<iostream>
using namespace std;

int main()
{
    int rows,cols,spaces,n,printvalue;
    cout<<"Enter the number of rows required:"<<endl;
    cin>>n;
    for(rows=1;rows<=n;rows++)
    {
        for(spaces=1;spaces<=n-rows;spaces++)
        {
            cout<<" ";
        }
        for(cols=1;cols<=2*rows-1;cols++)
        {
            printvalue=(cols<=rows)?cols:(2*rows-cols);
            cout<<printvalue;
        }
        cout<<endl;
    }
}