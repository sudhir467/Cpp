/*This program is to print the following pattern
    A
   BB
  CCC
 DDDD
EEEEE
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
                cout<< char(64+rows);
            }
        }
        cout<<endl;
    }
}