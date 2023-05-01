/*This program is to print the number of words in string*/
#include <bits/stdc++.h>
using namespace std;

int noofwords(char ch[])
{
    int cnt = 0;
    int n = strlen(ch);
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == ' ' && ch[i - 1] != ' ')
        {
            cnt++;
        }
    }
    return cnt + 1;
}

int main()
{
    char ch[] = "How are you sudhir";
    cout << noofwords(ch) << endl;
    return 0;
}