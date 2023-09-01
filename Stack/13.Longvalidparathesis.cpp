/* This program is to find the longest valid paranthesis*/

#include <bits/stdc++.h>
using namespace std;
int longestvalidparanthesis(string &str)
{
    stack<char> st;
    int maxlen = 0;
    st.push(-1);
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        if(ch=='(')
        {
            st.push(i);
        }
        else
        {
            st.pop();
            if(st.empty())
            {
                st.push(i);
            }
            else
            {
                int len=i-st.top();
                maxlen=max(len,maxlen);

            }
        }

    }
    return maxlen;

}

int main()
{
    string str = ")))()";
    int max = longestvalidparanthesis(str);
    cout << "longest valid paranthesis:" << max << endl;
    return 0;
}