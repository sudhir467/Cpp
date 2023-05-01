/*This program is to convert a string from lower case to upper case letter and vice versa*/

#include <bits/stdc++.h>
using namespace std;

void converttoupper(char alp[])
{
    int n = strlen(alp);
    for (int i = 0; i < n; i++)
    {
        alp[i] = alp[i] - 'a' + 'A';
    }
}

void converttolower(char alp2[])
{
    int n = strlen(alp2);
    for (int j = 0; j < n; j++)
    {
        alp2[j] = alp2[j] - 'A' + 'a';
    }
}

int main()
{
    char alp[10] = "sudhir";
    char alp2[20] = "SUDHIRBORRA";
    converttoupper(alp);
    converttolower(alp2);
    cout << alp << endl;
    cout << alp2 << endl;
    return 0;
}

