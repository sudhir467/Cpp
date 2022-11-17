/*This program is used to print the following pattern
1
12
123
1234
12345
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
        for(cols=1;cols<=rows;cols++)
        {
            cout<<cols;
        }
        cout<<endl;
    }
}
