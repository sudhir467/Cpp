/* This program prints the following pattern in c++
12345
1234
123
12
1
*/

#include <iostream>
using namespace std;

int main()
{
	int i,j,n;
	cout << "Enter the number of rows to be printed:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=1;j<=(n-i);j++)
		{
			cout<<j;
		}
		cout<< "\n";
	}
}
