/*Program to reverse a stack using recursion*/

#include<bits/stdc++.h>
using namespace std;
void insertatbottom(stack<int> &st, int num)
{
    // base case
    if (st.empty())
    {
        st.push(num);
        return;
    }

    // until the stack is empty
    int ans = st.top();
    st.pop();

    insertatbottom(st, num);

    st.push(ans);
}

void reverse(stack<int>&st)
{
    if(st.size()>0)
    {
        int x=st.top();
        st.pop();
        reverse(st);
        insertatbottom(st, x);
    }
}

int main()
{
    stack<int> st;
    st.push(7);
    st.push(8);
    st.push(9);

    reverse(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;

}