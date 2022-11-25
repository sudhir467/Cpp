/*This program is to print whether the character is Upper case ,lower case, special character or Digit*/

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter the character:"<<endl;
    cin>>ch;
    if(ch >= 65 && ch <= 90)
    {
        cout<<"Entered character is a Upper case letter"<<endl;
    }else if(ch >= 97 && ch <= 122)
    {
        cout<<"Entered character is Lower case letter"<<endl;
    }else if(ch >= 48 && ch <= 57)
    {
        cout<<"Entered character is a number"<<endl;
    }else
    {
        cout<<"Entered character is a special character"<<endl;
    }
}