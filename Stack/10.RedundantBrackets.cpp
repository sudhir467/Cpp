/*This program is to find whether brackets are reduntant or not*/

#include <bits/stdc++.h>
using namespace std;

bool checkRedundancy(string &str)
{
    stack<char> st;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == '(' || ch == '+' || ch =='-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            if (ch == ')')
            {
                bool isreduntant = true;
                while (st.top() != '(')
                {
                    char top = st.top();
                    if (top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        isreduntant = false;
                    }
                    st.pop();
                }

                if (isreduntant == true)
                return true;
                st.pop();
            }
        }
    }
    return false;
}

int main()
{
    string str="(a+b)";
    if(checkRedundancy(str)==true)
    {
        cout<<"Redundant Brackets are present";
    }
    else
    {
        cout<<" Reduntant brackets are not present";
    }

    return 0;
}
