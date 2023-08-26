/*This program is to remove middle element of the stack*/
#include <bits/stdc++.h>
using namespace std;

/*This approach using external stack

void delMiddle(stack<int>&st)
{
    int count=0;
    int n=st.size();
    stack<int>tempst;
    while(count < n/2)
    {
        int a=st.top();
        tempst.push(a);
        st.pop();
        count++;
    }
    st.pop();

    while(!tempst.empty())
    {
        st.push(tempst.top());
        tempst.pop();
    }
}

int main()
{
    stack<int> st;

    st.push(10);
    st.push(5);
    st.push(6);
    st.push(9);
    st.push(8);
    st.push(6);
    st.push(1);
    delMiddle(st);

    while(!st.empty())
    {
        int p=st.top();
        st.pop();
        cout<<p<<" ";
    }

    return 0;
}
*/

/*This approach using recursion*/

void printMiddle(stack<int> &s, int &totalSize)
{
    if (s.size() == 0)
    {
        cout << "There is no element in stack" << endl;
        return;
    }
    // base case
    if (s.size() == totalSize / 2 + 1)
    {
        cout << "Middle element is: " << s.top() << endl;
        return;
    }

    int temp = s.top();
    s.pop();

    // recursive call
    printMiddle(s, totalSize);

    // backtrack;
    s.push(temp);
}

int main()
{

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    int totalSize = s.size();
    printMiddle(s, totalSize);

    return 0;
}
