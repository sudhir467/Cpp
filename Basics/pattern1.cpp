/* This program is to Print the following pattern in C++
 
******
******
******
******
******

*/

#include<iostream>
using namespace std;

int main()
{
	int i,j,n;
	cout <<"Enter the number of Rows required:"<<endl;
	cin>> n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
