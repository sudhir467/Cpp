/*This program is to print whether a person is eligible to vote or not*/

#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<" Enter the age of the person:"<< endl;
    cin>>age;
    if(age>=18)
    {
        cout<<" The Person is eligible to vote"<< endl;
    }else
    {
        cout<<" The person is not eligible to vote" <<endl;
    }
}