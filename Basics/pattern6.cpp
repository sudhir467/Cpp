/* This program prints the following pattern in c++
 1
 22
 333
 4444
 55555
 */

#include <iostream>
using namespace std;

int main()
{
	int i,j,n;
	cout<<"Enter the number of rows to be printed:"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<i;
		}
		cout<<endl;
	}
}
