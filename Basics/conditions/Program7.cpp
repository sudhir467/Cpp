/*This program is to print reverse a given number*/

#include<iostream>
using namespace std;

int main()
{
    int num,res,rev=0;
    cout<<"Enter the number to be reversed:"<<endl;
    cin>>num;
    while(num!=0)
    {
        res=(num % 10);
        rev= rev*10 + res;
        num /= 10;
    }
    cout<<"The reversed number is:"<< rev <<endl;
    
}