/* This program is to print the following pattern
1 2 3 4 5
 1 2 3 4
  1 2 3
   1 2
    1
*/

#include<iostream>
using namespace std;

int main()
{
    int rows,cols,spaces,n;
    cout<<"Enter the number of rows required:"<<endl;
    cin>>n;
    for(rows=1;rows<=n;rows++)
    {
        for(spaces=1;spaces<=rows-1;spaces++)
        {
            cout<<" ";
        }
        for(cols=1;cols<=n-rows+1;cols++)
        {
            cout<<cols<<" ";
        }
        cout<<endl;
    }
}