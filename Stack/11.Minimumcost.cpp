/*This program is to find the minimum cost to make string valid */

#include <bits/stdc++.h>
using namespace std;

int mincost(string &str)
{
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == '{')
        {
            st.push(ch);
        }
        else
        {
            if (ch == '}')
            {
                if (!st.empty() && st.top() == '{')
                {
                    st.pop();
                }
                else
                {
                    st.push(ch);
                }
            }
        }
    }

    int a = 0, b = 0;
    while (!st.empty())
    {
        if (st.top() == '{')
        {
            b++;
        }
        else
        {
            a++;
        }
        st.pop();
    }

    int ans = (a + 1) / 2 + (b + 1) / 2;
    return ans;
}

int main()
{
    string str="{{{{";
    int min= mincost(str);
    cout<<"Minimum cost is:"<<min<<endl;

    return 0;

}