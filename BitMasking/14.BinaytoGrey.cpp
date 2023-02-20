/* This program is to convert a number from binary to grey*/

#include <iostream>
using namespace std;

int bintogreyconverter(int n)
{
    return n ^ (n >> 1);
}

int main()
{
    cout << bingreyconverter(7) << endl;
}