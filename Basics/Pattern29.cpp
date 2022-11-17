/* This program is to print the following pattern
*
**
***
****
*****
****
***
**
*
*/

#include<iostream>
using namespace std;

int main()
{
    int rows,cols,n;
    cout<<"Enter the number of rows required:"<<endl;
    cin>>n;

    for(rows=1;rows<=n;rows++)
    {
        for (cols=1;cols<=rows;cols++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(rows=n+1;rows<=2*n-1;rows++)
    {
        for(cols=1;cols<=2*n-rows;cols++)
        {
            cout<<"*";
        }
        cout <<endl;
    }
}