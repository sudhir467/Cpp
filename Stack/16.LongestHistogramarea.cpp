/*This program is to fint he largest rectangle in Histogram*/

#include <bits/stdc++.h>
using namespace std;

vector<int> nextsmaller(vector<int> &v)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(v.size());
    for (int i = v.size() - 1; i < v.size(); i--)
    {
        int curr = v[i];
        while (st.top() != -1 && v[st.top()] >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }

    return ans;
}

vector<int> prevsmaller(vector<int> &v)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(v.size());
    for (int i = 0; i < v.size(); i++)
    {
        int curr = v[i];
        while (st.top() != -1 && v[st.top()] >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }

    return ans;
}

int getrectangleArea(vector<int> &height)
{
    vector<int> prev = prevsmaller(height);

    vector<int> next = nextsmaller(height);

    int maxarea = INT_MIN;
    int size = height.size();

    for (int i = 0; i < height.size(); i++)
    {
        int length = height[i];
        if (next[i] == -1)
        {
            next[i] = size;
        }

        int width = next[i] - prev[i] - 1;
        int area = length * width;
        maxarea = max(maxarea, area);
    }

    return maxarea;
}

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

    cout << "Ans is: " << getrectangleArea(v) << endl;
    return 0;
}