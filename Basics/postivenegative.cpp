/* This program takes a number and prints whether its positive, negative or its zero*/

#include<iostream>
using namespace std;

int main()
{
	int a;
	cout << " Enter the value of a :"<< endl;
	cin>>a;
	if(a > 0)
	{
		cout << " a is postive"<< endl;
	}else if(a<0)
	{
		cout << " a is negative " << endl;
	}else
	{
		cout << "a is equal to zero"<< endl;
	}
	
	return 0;
}



