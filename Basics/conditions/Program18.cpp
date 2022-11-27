/*This program is even or odd */

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;

    switch(num % 2)
    {
        case 0: cout<<"The Entered number is Even number"<<endl;
                break;
        case 1: cout<<"The Entered number is Odd number"<<endl;
                break;
    }
}