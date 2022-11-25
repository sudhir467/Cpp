/* This program is to count the number of digits of an Integer*/

#include<iostream>
using namespace std;

int main()
{
    int number,count=0;
    cout << "Enter the number:"<< endl;
    cin >> number;

    // check whether the number enter is zero
    if(number == 0)
    {
        count=1;
    }
    // if the number is other than zero then we increment count
    while(number != 0)
    {
       number=number/10;
       count++;  
     
    }
    // Print the value of count
    
    cout<<"The number of digits in the given number are:"<< count <<endl;


}
