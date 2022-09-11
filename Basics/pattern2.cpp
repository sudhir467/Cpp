/* This program is prints the following pattern in c++ 
 *
 **
 ***
 ****
 *****
 */

#include<iostream>
using namespace std;

int main()
{
	int i,j,n;
	cout<<"Enter the number of rows requires to printed:"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}

