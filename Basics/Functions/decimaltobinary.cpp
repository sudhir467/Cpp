/*Program to convert from decimal number to binary number*/

#include <iostream>
using namespace std;

void dectobin(int n)
{
    int binnum[32]; // create a array to store the numbers
    int i = 0; // counter for binary array

    while (n > 0)
    {
        binnum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // print the values in reverse order
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binnum[j];
    }
}


// main function for decimal to binary number
int main()
{
    int n = 17;
    dectobin(n);
    return 0;
}