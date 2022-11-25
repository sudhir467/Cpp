/*Program to find out the Greatest number amoung the given three numbers*/

#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the value of the numbers:"<<endl;
    cin>> a >> b >> c;
    if(a>b && a>c)
    {
        cout <<" a is greater than b and c"<<endl;
    }else if( b>a && b>c)
    {
        cout << " b is greater than a and c"<<endl;
    }else if(c>a && c>a)
    {
        cout <<"c is greater than a and b"<<endl;
    }else
    {
        cout<<"All the three numbers entered are same"<<endl;
    }

}