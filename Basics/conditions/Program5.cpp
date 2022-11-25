/* This program is to print a leap year or not*/

#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter the year :"<<endl;
    cin>>year;
    if((year % 4) == 0)
    {
        cout<<"Entered year is leap year"<<endl;
    }else
    {
        cout<<"Enterd year is not a leap year"<<endl;
    }
}