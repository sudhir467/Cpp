/* This program is to print sum of two numbers using arguments and return type*/

#include<iostream>
using namespace std;

//function declaration defining the data types of the arguments if return type is not declared compiler will think its int type

int sum(int,int);

// Main function which is used to call function sum

int main()
{
    int x,y,c=0;
    cout<<"Enter the values of x and y:"<< endl;
    cin>>x>>y;
    c = sum(x,y); //Function calling
    // Print the sum value
    cout<<"The sum of two numbers is:"<< c <<endl;
}



int sum(int a, int b)
{
    int s=0; //Initially the sum is assigned to be zero
    s= a+b;
    return s; //Return sum to main function
}
