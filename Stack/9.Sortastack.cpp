/*This program to sort a stack*/

#include <bits/stdc++.h>
using namespace std;

void sortInsert(stack<int>&st,int num)
{
    if(st.empty()||st.top()<num )
    {
        st.push(num);
        return ;
    }

    int n=st.top();
    st.pop();
    sortInsert(st,num);
    st.push(n);
}

void sortstack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    int num = st.top();
    st.pop();
    sortstack(st);
    sortInsert(st, num);
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(15);
    st.push(20);
    st.push(5);
    st.push(9);

    sortstack(st);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}