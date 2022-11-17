/*This program is to print the following pattern
ABCDE
ABCD
ABC
AB
A
*/
#include <iostream>
using namespace std;
int main()
{
  int rows,cols,n;
  cout<<"Enter the number of rows required:"<<endl;
  cin>>n;
 
  for(rows=1;rows<=n;rows++)
    {
        for(cols=rows;cols<=n;cols++)
        {
        cout<<((char)(cols+64));
        }
 
     cout<<endl;
 
    }
 
  return 0;
}


