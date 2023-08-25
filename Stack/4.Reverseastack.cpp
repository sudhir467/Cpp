/* This program is to reverse a string using stack*/

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string s="sudhir";
    stack<char> st;

    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        st.push(ch);
    }

    string ans=" ";

    while(!st.empty())
    {
        char ch=st.top();
        ans.push_back(ch);
        st.pop();
    }

    cout<<"Reverse of string using stack:"<<ans<<endl;

    return 0;    

}