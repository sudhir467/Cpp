/*This Program is to find whether the number is palindrome or not*/

#include <iostream>
using namespace std;

int main()
{
    int num,remainder,reverse=0,check=0;
    cout<< "Enter the number:"<< endl;
    cin >> num;
    check=num; //Intializing the number to a const variable

    while(num!=0)
    {
        remainder = num % 10;
        reverse = reverse*10+remainder;
        num/=10;
    }
    // Check whether the reverse is equal to the number given
    if(check == reverse)
    {
        cout<<"The Given number is a Palindrome number"<< endl;
    }else
    {
        cout<<"The Given number is not a Palindrome number"<<endl;
    }
}




