/*This program is to print the following pattern
1
2 3
4 5 6
7 8 9 10
*/

#include<iostream>
using namespace std;

int main()
{
    int rows,cols,n,count=1;
    cout<<"Enter the number of rows required:"<<endl;
    cin>>n;
    for(rows=1;rows<=n;rows++)
    {
        for(cols=1;cols<=rows;cols++)
        {
            cout<< count<<" " ;
            count++;
        }
        cout<<endl;
    }
}