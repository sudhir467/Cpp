/* This program is to print Max and min of two numbers using functions*/

#include<iostream>
using namespace std;

//Function declaration
int funcMinMax( int, int);

// Main function to call the min-max function
int main()
{
    int a,b;
    cout<<"Enter the values of a and b"<<endl;
    cin>>a>>b;
    funcMinMax(a,b); // function calling 
}

// Function to compute min and max of two given values
int funcMinMax(int a, int b)
{
    if (a>b) // check which is greater between two numbers
    {
        cout<<"a is max and b is min"<< endl;
    }
    else if(b>a)
    {
        cout<<"b is Max and a is min" << endl;
    }
    else
    {
        cout<<"Entered numbers are same"<<endl;
    }
}


