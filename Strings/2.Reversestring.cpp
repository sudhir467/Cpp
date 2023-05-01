/*This program is to reverse the given string*/

#include <bits/stdc++.h>
using namespace std;

void reversestring(string& str)
{
    int i = 0;
    int n = str.length();
    int j = n - 1;

    while (i <= j)
    {
        swap(str[i], str[j]);
        i++;
        j--;
    }
}

int main()
{
    string str= "sudhir";
    reversestring(str);
    cout<< str;
    return 0;
}