/*This program is to Calculate the sum of natural numbers of given number*/

#include<iostream>
using namespace std;

int main()
{
    int num,sum=0;
    cout<<"Enter the number for which we need to find sum:"<<endl;
    cin>>num;
    //check whether the number is natural number or not
    while(num>0)
    {
        sum=num+sum;
        num--;
    }
    
    // Print the sum after computation 
    cout<<"The sum of all natural numbers is: "<< sum <<endl;
}