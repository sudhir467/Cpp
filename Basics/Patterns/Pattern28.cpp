/*This program is to print the following pattern
A B C D E
 A B C D
  A B C
   A B
    A
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
        for (cols=1;cols<=n-rows+1;cols++)
        {
            cout<< char(64+cols)<<" ";
        }
    cout<<endl;
    }
}
