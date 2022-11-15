/*This program is to print the following Pattern
    1
   22
  333
 4444
55555
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
                cout<<rows;
            }
        }
        cout<<endl;
    }
}