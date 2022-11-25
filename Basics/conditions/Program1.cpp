/* This program is to tell whether the number is Positive or negative*/

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    if(num>0)
    {
        cout<<"Entered is positive"<<endl;
    }else if(num<0)
    {
        cout<<"Entered number is negitive"<<endl;
    }else
    {
        cout<<"Entered number is Zero"<<endl;
    }
}