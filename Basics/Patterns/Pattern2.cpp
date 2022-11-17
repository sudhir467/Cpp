/*This program is used to print the following pattern
11111
22222
33333
44444
55555
*/

#include<iostream>
using namespace std;

int main()
{
    int rows,cols,n;
    cout<<"Enter the number of rows required:"<<endl;
    cin>>n;
        
    for (rows=1;rows<=n;rows++)
    {
        for(cols=1;cols<=n;cols++)
        {
            cout<<rows;

        }
        cout<<endl;
    }
}