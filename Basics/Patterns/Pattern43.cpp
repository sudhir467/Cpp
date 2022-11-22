/*This program is to print the following pattern
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
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
        for(spaces=1;spaces<=n-rows;spaces++)
        {
            cout<<" ";
        }
        for(cols=1;cols<=2*rows-1;cols++)
        {
            if(cols==1||cols==2*rows-1)
            {
                cout<<"*";
            }else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(rows=1;rows<=n;rows++)
    {
        for(spaces=1;spaces<=rows;spaces++)
        {
            cout<<" ";
        }
        for(cols=1;cols<=2*n-2*rows-1;cols++)
        {
            if(cols==1||cols==2*n-2*rows-1)
            {
                cout<<"*";
            }else
            {
                cout<<" ";
            }

        }
        cout<<endl;
    }
}