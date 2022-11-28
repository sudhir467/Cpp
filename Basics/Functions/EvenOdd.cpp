/* This program is to find whether given number is even or odd*/

#include<iostream>
using namespace std;

// Function declaration
int EvenOdd(int);

// Main Function to call the Even odd function
int main()
{
    int Number;
    cout<<"Enter the number:"<<endl;
    cin>>Number;
    EvenOdd(Number); //Function calling
}

// Compute whether the entered number is either zero, Even or odd
int EvenOdd(int num)
{
    if(num==0)
    {
        cout<<"Entered number is zero"<<endl;
    }
    else if(num % 2==0)
    {
        cout<<"Entered number is even"<<endl;
    }
    else
    {
        cout<<"Entered number is odd"<<endl;
    }
}
