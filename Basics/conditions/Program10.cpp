/* program to find whether the number is Armstrong number of not*/

#include<iostream>
using namespace std;

int main()
{
    int number,check, sum=0, cube=0, remainder=0;

    cout<<"Enter the number:"<<endl;
    cin >> number;
    check = number; // initialize the enter number to a const variable

    // check whether the number is greater that zero 
    while(number!=0)
    {
        remainder=number%10;
        cube=remainder*remainder*remainder;
        sum= cube + sum;
        number/=10;
    }
    //check whether its  sum of cubes of individual digit is equal to number given
    if(check==sum)
    {
        cout <<"Given number is Armstrong number"<< endl;
    }else
    {
        cout<<"Given number is not an armstrong number"<< endl;
    }

}