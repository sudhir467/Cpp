/*This program is to insert an element at bottom of the stack*/

#include <bits/stdc++.h>
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

int main()
{
    stack<int> st;
    st.push(7);
    st.push(8);
    st.push(9);

    insertatbottom(st, 6);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}