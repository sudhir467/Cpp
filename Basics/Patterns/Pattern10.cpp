/*This program is used to print the following pattern
55555
4444
333
22
1
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
        for(cols=1;cols<=n-rows+1;cols++)
        {
            cout<< n-rows+1;
            
        }
        cout <<endl;
        
        
    }
}