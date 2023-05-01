/*This program is to find whether the given word is palindrome or not*/

#include <bits/stdc++.h>
using namespace std;

bool checkpalindrome(char str[])
{
    int n = strlen(str);
    int j = n - 1;
    int i = 0;
    while (i <= j)
    {
        if (str[i] == str[j])
        {
            i++;
            j--;
        }
        else if (str[i] != str[j])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char str[10] = "racecar";
    checkpalindrome(str);
    cout << str << endl;
    cout << checkpalindrome(str) << endl;
}