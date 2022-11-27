/*Program to Print the basic calculator*/

#include<iostream>
using namespace std;

int main()
{
    int a,b,c,choice;
    cout<<"Enter the values of a and b:"<<endl;
    cin >> a >> b;
    cout<<"Enter your choice :"<<endl;
    cin >> choice;

    switch(choice)
    {
        case 1:
            c=a+b;
            cout<<"Addition of Two numbers is:"<< c <<endl;
            break;
        case 2:
            c=a-b;
            cout<<"Subtraction of two numbers is:"<< c <<endl;
            break;
        case 3:
            c=a*b;
            cout<<"Multiplication of two numbers is:"<< c <<endl;
            break;
        case 4:
            if(b==0)
            {
                cout<<"Divsion By Zero"<<endl;
                break;
            }else
            {
            c=a/b;
            cout<<"Division of two numbers is:"<< c <<endl;
            break;
            }
        default:
            cout<<" Enter valid choice " <<endl;

            
    }



}