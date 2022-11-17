/*This program is to print the follwing pattern
12345
12345
12345
12345
12345
*/

#include<iostream>
using namespace std;

int main()
{
int rows,cols,n;
cout<<"Enter the number of rows required:"<< endl;
cin>>n;
for(rows=1;rows<=n;rows++)
{
    for(cols=1;cols<=n;cols++)
    {
        cout<<cols;
    }
    cout<<endl;
}

}