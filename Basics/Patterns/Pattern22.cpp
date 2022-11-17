/*This program is to print the following pattern
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
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
        for(cols=1;cols<=n;cols++)
        {
            if(rows+cols<=n)
            {
                cout<<" ";
            }else
            {
                cout<<rows<<" ";
            }
        }
        cout<<endl;
    }
}