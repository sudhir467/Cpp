/* This program is to find the sum of two numbers using fucntions with no return type*/

#include<iostream>
using namespace std;

//Function Declaration
void sum(void);

//Main function which will call the function sum
int main()
{
    sum(); //Function calling
}

//function definition
void sum()
{
    int a,b,sum=0;
    cout<<"Enter the values of a and b:"<<endl;
    cin>>a>>b;
    sum=a+b;
    cout<<"The sum of two numbers is:"<<sum<<endl;
}
