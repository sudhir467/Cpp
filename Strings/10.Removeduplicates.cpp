/*This program is to remove duplicates in the program*/

#include <bits/stdc++.h>
using namespace std;

string removeduplicates(string str)
{
    string ans = " ";
    int i = 0;
    while (i < str.length())
    {
        if (ans.length() > 0 && ans[ans.length() - 1] == str[i])
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back();
        }
        i++;
    }
    return ans;
}

int main()
{
    string str = "abbaca";
    removeduplicates(str);
    cout << str << endl;
}