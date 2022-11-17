/*This program is to print the following pattern
    1
   1 2
  1 2 3 
 1 2 3 4 
1 2 3 4 5 
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
        for(cols=1;cols<=n;cols++)
        {
            if(rows+cols<=n)
            {
                cout<<" ";
            }else
            {
                cout<<(cols+rows-n)<<" ";
            }

        }
        cout<<endl;
}
}