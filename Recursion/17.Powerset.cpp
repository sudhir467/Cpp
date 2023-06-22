/*This program is to print the power set of the all numbers*/

#include <bits/stdc++.h>
using namespace std;

void powerset(string str, int index = 0, string cur = " ")
{
    int n = str.length();
    if (index == n)
    {
        cout << cur << endl;
        return;
    }

    powerset(str, index + 1, cur + str[index]);
    powerset(str, index + 1, cur);
}

int main()
{
    string str = "abc";
    powerset(str);
    return 0;
}