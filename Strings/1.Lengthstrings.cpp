/* This program is to find the length of the string*/

#include<bits/stdc++.h>
using namespace std;

int getlength(char name[])
{
    int i=0;
    int length=0;
    while(name[i]!='\0')
    {
        length++;
        i++;
    }
    return length;
}

int main()
{
    char name[100];
    cin>>name;
    cout<<"length is:"<<getlength(name)<<endl;
    return 0;
}