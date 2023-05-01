/*This program is to replace all the spaces in the string*/

#include <bits/stdc++.h>
using namespace std;

void replacespace(char str[])
{
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '#';
        }
    }
}

int main()
{
    char str[25] = "my name is sudhir";
    replacespace(str);
    cout << str << endl;
}
