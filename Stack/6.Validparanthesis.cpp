/*This program is to check whether expression is valid or not*/

#include <bits/stdc++.h>
using namespace std;

bool valid(string expr)
{
    stack<char> st;
    for (int i = 0; i < expr.length(); i++)
    {
        if (st.empty())
        {
            st.push(expr[i]);
        }
        else if ((st.top() == '(' && expr[i] == ')') ||
                 (st.top() == '{' && expr[i] == '}') ||
                 (st.top() == '[' && expr[i] == ']'))
        {
            st.pop();
        }
        else
        {
            st.push(expr[i]);
        }
    }

    if (st.empty())
    {
        return true;
    }
    return false;
}

int main()
{
    string expr = "{()}[]";
 
    // Function call
    if (valid(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}