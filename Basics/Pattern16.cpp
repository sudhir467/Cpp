/*This program is to print the following pattern
    5
   54
  543
 5432
54321
*/

#include <iostream>
using namespace std;

int main()
{
    int rows,cols,space,n;
    cout<<"Enter the rows required:"<<endl;
    cin>>n;
    for(rows=1;rows<=n;rows++)
    {
        for(space=1;space<=n-rows;space++)
        {
            cout<<" ";
        }
        for(cols=1;cols<=rows;cols++)
        {
            cout<<n-cols+1;
        }
        cout<<endl;
    }
}