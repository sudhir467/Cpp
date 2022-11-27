/* This program is to Find whether the number is postive,negative or zero */

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout <<"Enter the number:"<<endl;
    cin >> a;

    switch(a>0)
    {
        case 1: cout<<"The number is positive number"<<endl;
                break;
        case 0: if(a<0)
                {
                cout<<"The number is negative number"<<endl;
                }else
                {
                cout<<"The number is Zero"<<endl;
                } 
    }
}