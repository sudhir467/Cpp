/* This program the following pattern in c++
 ABCDE
 ABCDE
 ABCDE
 ABCDE
 ABCDE
 */

#include<iostream>
using namespace std;

int main()
{
	int i,j,n;
	cout<<"Enter the number of rows to printed:"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<(char)(64+j);
		}
		cout<< endl;
	}
}
